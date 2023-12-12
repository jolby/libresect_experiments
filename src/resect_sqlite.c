#include "sqlite3.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../resect.h"
#include "resect_types_private.h"
#include "resect_private.h"
#include "resect_sqlite_private.h"

#define CHECK_BIND(call, name) if ((call) != SQLITE_OK) { \
    fprintf(stderr, "Unable to bind value for param: %s. Error Message: %s\n", name, sqlite3_errmsg(db)); \
    return RESECT_ERR_SQLITE_BIND_ERROR; \
}

#define BIND_NAMED_INT(stmt, name, value_expression) \
  CHECK_BIND(sqlite3_bind_int(stmt, sqlite3_bind_parameter_index((stmt), (name)), (value_expression)), name);

#define BIND_NAMED_TEXT(stmt, name, value_expression) \
  CHECK_BIND(sqlite3_bind_text(stmt, sqlite3_bind_parameter_index((stmt), (name)), \
                               (value_expression), -1, SQLITE_TRANSIENT), name);

#define COMMIT_AND_CLEANUP(stmt, db, finalize_stmt, ok_status, err_status) \
    do { \
        int rc = sqlite3_step(stmt); \
        if (rc != SQLITE_DONE) { \
            printf("Statement execution failed: %s\n", sqlite3_errmsg(db)); \
            sqlite3_finalize(stmt); \
            return err_status; \
        } \
        if(finalize_stmt) { \
            sqlite3_finalize(stmt); \
        } else { \
            sqlite3_reset(stmt); \
        } \
        return ok_status; \
    } while(0)

//XXX put this in utils??
void copy_location_string(resect_decl decl, char* buffer, size_t size) {
    resect_location loc = resect_decl_get_location(decl);
    snprintf(buffer, size, "%s:%d",
             resect_location_name(loc),
             resect_location_line(loc));
}

resect_error_code simple_sql_execute(sqlite3 *db, const char *sql) {
  if(db == NULL) {
    fprintf(stderr, "Error! Database is NULL.\n");
    return RESECT_ERR_NULL_POINTER;
  }
  int rc = sqlite3_exec(db, sql, NULL, 0, 0);

  if( rc != SQLITE_OK ) {
    fprintf(stderr, "Unable to execute: %s. Error Message:  %s\n",
            sql, sqlite3_errmsg(db));
  } else {
    fprintf(stdout, "SQL executed successfully\n");
  }
  return RESECT_OK;
}

resect_error_code create_resect_decl_insert_statement(sqlite3 *db, sqlite3_stmt **stmt) {
    const char *sql = "INSERT INTO resect_declarations " \
      "(kind, resect_id, name, namespace, location, mangled_name, "\
      "comment, source, access, linkage, is_template, is_partial, is_forward) " \
      "VALUES "                                                         \
      "(:kind, :resect_id, :name, :namespace, :location, :mangled_name, " \
      ":comment, :source, :access, :linkage, :is_template, :is_partial, :is_forward)";

    int rc = sqlite3_prepare_v2(db, sql, -1, stmt, NULL);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "Unable to prepare statement. Error Message: %s\n",
                sqlite3_errmsg(db));
        return RESECT_ERR_SQLITE_PREPARE_ERROR;
    }
    return RESECT_OK;
}

resect_error_code insert_declaration_into_sqlite(resect_decl decl, sqlite3 *db ,
                                                 sqlite3_stmt *stmt, resect_bool finalize_stmt) {
  char location[512];
  copy_location_string(decl, location, sizeof(location));

  /* printf("XXX Inserting declaration: %s, kind: %d\n", resect_string_to_c(decl->name), decl->kind); */
  BIND_NAMED_INT(stmt, ":kind", decl->kind);
  BIND_NAMED_TEXT(stmt, ":resect_id", resect_string_to_c(decl->id));
  BIND_NAMED_TEXT(stmt, ":name", resect_string_to_c(decl->name));
  BIND_NAMED_TEXT(stmt, ":namespace", resect_string_to_c(decl->namespace));
  BIND_NAMED_TEXT(stmt, ":location", location);
  BIND_NAMED_TEXT(stmt, ":mangled_name", resect_string_to_c(decl->mangled_name));
  BIND_NAMED_TEXT(stmt, ":comment", resect_string_to_c(decl->comment));
  BIND_NAMED_TEXT(stmt, ":source", resect_string_to_c(decl->source));
  BIND_NAMED_INT(stmt, ":access", decl->access);
  BIND_NAMED_INT(stmt, ":linkage", decl->linkage);
  BIND_NAMED_INT(stmt, ":is_template", decl->is_template);
  BIND_NAMED_INT(stmt, ":is_partial", decl->partial);
  BIND_NAMED_INT(stmt, ":is_forward", decl->forward);
  COMMIT_AND_CLEANUP(stmt, db, finalize_stmt, RESECT_OK, RESECT_ERR_SQLITE_STEP_ERROR);
}

resect_error_code create_resect_type_insert_statement(sqlite3 *db, sqlite3_stmt **stmt) {
    const char *sql = "INSERT INTO resect_types " \
      "(kind, name, size, alignment, category, const_qualified, pod, undeclared) " \
      "VALUES "                                                         \
      "(:kind, :name, :size, :alignment, :category, :const_qualified, :pod, :undeclared)";
    int rc = sqlite3_prepare_v2(db, sql, -1, stmt, NULL);
    if (rc != SQLITE_OK) {
        fprintf(stderr, "Unable to prepare statement. Error Message: %s\n",
                sqlite3_errmsg(db));
        return RESECT_ERR_SQLITE_PREPARE_ERROR;
    }
    return RESECT_OK;
}

resect_error_code insert_type_into_sqlite(resect_type type, sqlite3 *db ,
                                          sqlite3_stmt *stmt, resect_bool finalize_stmt) {
  BIND_NAMED_INT(stmt, ":kind", type->kind);
  BIND_NAMED_TEXT(stmt, ":name", resect_string_to_c(type->name));
  BIND_NAMED_INT(stmt, ":size", type->size);
  BIND_NAMED_INT(stmt, ":alignment", type->alignment);
  BIND_NAMED_INT(stmt, ":category", type->category);
  BIND_NAMED_INT(stmt, ":const_qualified", type->const_qualified);
  BIND_NAMED_INT(stmt, ":pod", type->pod);
  BIND_NAMED_INT(stmt, ":undeclared", type->undeclared);
  COMMIT_AND_CLEANUP(stmt, db, finalize_stmt, RESECT_OK, RESECT_ERR_SQLITE_STEP_ERROR);
}

resect_error_code ensure_resect_runs_table(sqlite3 *db) {
  const char *sql =
  "CREATE TABLE IF NOT EXISTS resect_runs ("  \
    "id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT," \
    "start_time         TEXT," \
    "end_time           TEXT," \
    "configuration      JSON," \
    "arguments          JSON," \
    "errors             JSON," \
    "final_results      JSON" \
    ");";
  return simple_sql_execute(db, sql);
}

/* "FOREIGN KEY(fields) REFERENCES resect_fields(id)," \ */
/* "FOREIGN KEY(template_arguments) REFERENCES resect_template_arguments(id)" \ */
/* "FOREIGN KEY(declaration) REFERENCES resect_declarations(id)," \ */

resect_error_code ensure_resect_types_table(sqlite3 *db) {
  const char *sql =
  "CREATE TABLE IF NOT EXISTS resect_types ("  \
    "id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT," \
    "kind                INTEGER," \
    "name                TEXT," \
    "size                INTEGER," \
    "alignment           INTEGER," \
    "category            INTEGER," \
    "const_qualified     INTEGER," \
    "pod                 INTEGER," \
    "undeclared          INTEGER" \
    ");";
  return simple_sql_execute(db, sql);
}

resect_error_code ensure_resect_declarations_table(sqlite3 *db) {
  const char *sql = "CREATE TABLE IF NOT EXISTS resect_declarations ("  \
    "id INTEGER NOT NULL PRIMARY KEY AUTOINCREMENT," \
    "resect_id           TEXT," \
    "resect_type_id      INTEGER,"
    "owning_declaration_id  INTEGER,"
    "kind                INTEGER," \
    "namespace           TEXT," \
    "name                TEXT," \
    "mangled_name        TEXT," \
    "location            TEXT," \
    "comment             TEXT," \
    "source              TEXT," \
    "access              INTEGER, " \
    "linkage             INTEGER," \
    "inclusion_status    INTEGER," \
    "is_template         INTEGER," \
    "is_partial          INTEGER," \
    "is_forward          INTEGER," \
    "FOREIGN KEY(resect_type_id) REFERENCES resect_types(id)," \
    "FOREIGN KEY(owning_declaration_id) REFERENCES resect_declarations(id)" \
    ");";
  return simple_sql_execute(db, sql);
}

resect_error_code ensure_sqlite_tables(sqlite3 *db) {
  if(db == NULL) {
    fprintf(stderr, "Error! Database is NULL.\n");
    return RESECT_ERR_NULL_POINTER;
  }
  int rc;
  rc = ensure_resect_runs_table(db);
  if( rc != SQLITE_OK ) {
    fprintf(stderr, "Unable to create resect_resect_runs table. Error Message:  %s\n", sqlite3_errmsg(db));
    return RESECT_ERR_SQLITE_DDL_ERROR;
  }
  rc = ensure_resect_types_table(db);
  if( rc != SQLITE_OK ) {
    fprintf(stderr, "Unable to create resect_types table. Error Message:  %s\n", sqlite3_errmsg(db));
    return RESECT_ERR_SQLITE_DDL_ERROR;
  }
  rc = ensure_resect_declarations_table(db);
  if( rc != SQLITE_OK ) {
    fprintf(stderr, "Unable to create resect_declarations table. Error Message:  %s\n", sqlite3_errmsg(db));
    return RESECT_ERR_SQLITE_DDL_ERROR;
  }
  return RESECT_OK;
}

resect_error_code ensure_sqlite_db(const char *working_dir, const char *db_name, sqlite3 **db) {
  resect_error_code created_rc = ensure_directory_exists(working_dir);
  if(! (created_rc == RESECT_OK)) {
    fprintf(stderr, "Error! Failed to create working directory rc: %d.\n", created_rc);
    return created_rc;
  }
  char *db_path = malloc(strlen(working_dir) + strlen(db_name) + 2); // 2 for "/" + "\0"
  strcpy(db_path, working_dir);
  strcat(db_path, "/");
  strcat(db_path, db_name);

  printf("Opening sqlite database at %s\n", db_path);
  int rc = sqlite3_open(db_path, db);
  printf("XXX db open RC: %d, db: %p\n", rc, *db);
  if ((rc != SQLITE_OK) || (db == NULL)) {
    fprintf(stderr, "Can't open database: %s. Error Message:  %s\n", db_path, sqlite3_errmsg(*db));
    sqlite3_close(*db);
    free(db_path);
    return RESECT_ERR_SQLITE_DB_OPEN_ERROR;
  } else {
    fprintf(stdout, "Opened database successfully. DB: %p\n", *db);
  }
  if(ensure_sqlite_tables(*db) != RESECT_OK) {
    fprintf(stderr, "Error! Failed to create tables in database. Error message: %s\n", sqlite3_errmsg(*db));
    sqlite3_close(*db);
    free(db_path);
    return RESECT_ERR_SQLITE_DDL_ERROR;
  }
  // perform any cleanups
  free(db_path);
  return RESECT_OK;
}

resect_error_code insert_declarations_into_sqlite(resect_collection decls, sqlite3 *db) {
  resect_iterator decl_iter = resect_collection_iterator(decls);

  unsigned int decl_count = resect_collection_size(decls);
  printf("Inserting %u declarations into sqlite database.\n", decl_count);
  unsigned int num_processed = 0;
  resect_error_code rc;
  sqlite3_stmt *decl_stmt;
  sqlite3_stmt *type_stmt;

  if((rc = create_resect_decl_insert_statement(db, &decl_stmt)) != RESECT_OK) {
    fprintf(stderr, "Error! Failed to create decl sqlite statement. Error code: %d.\n", rc);
    return rc;
  }
  if((rc = create_resect_type_insert_statement(db, &type_stmt)) != RESECT_OK) {
    fprintf(stderr, "Error! Failed to create type sqlite statement. Error code: %d.\n", rc);
    return rc;
  }
  sqlite3_exec(db, "BEGIN TRANSACTION;", NULL, NULL, NULL);
  while (resect_iterator_next(decl_iter)) {
    resect_decl decl = resect_iterator_value(decl_iter);
    if((rc = insert_declaration_into_sqlite(decl, db, decl_stmt, resect_false)) != RESECT_OK) {
      fprintf(stderr, "Error! Failed to insert declaration into sqlite database. Error code: %d.\n", rc);
      sqlite3_exec(db, "ROLLBACK;", NULL, NULL, NULL);
      return RESECT_ERR_SQLITE_INSERT_ERROR;
    }
    resect_type type = resect_decl_get_type(decl);
    if((rc = insert_type_into_sqlite(type, db, type_stmt, resect_false)) != RESECT_OK) {
      fprintf(stderr, "Error! Failed to insert type into sqlite database. Error code: %d.\n", rc);
      sqlite3_exec(db, "ROLLBACK;", NULL, NULL, NULL);
      return RESECT_ERR_SQLITE_INSERT_ERROR;
    }
    num_processed++;
    if(num_processed % 1000 == 0) {
      printf("Processed %u of %u declarations.\n", num_processed, decl_count);
      sqlite3_exec(db, "COMMIT;", NULL, NULL, NULL);
      sqlite3_exec(db, "BEGIN TRANSACTION;", NULL, NULL, NULL);
    }
  }
  sqlite3_exec(db, "COMMIT;", NULL, NULL, NULL);
  sqlite3_finalize(decl_stmt);
  resect_iterator_free(decl_iter);
  return RESECT_OK;
}
