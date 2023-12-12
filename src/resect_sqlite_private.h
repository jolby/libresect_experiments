#ifndef RESECT_SQLITE_PRIVATE_H_
#define RESECT_SQLITE_PRIVATE_H_

#include "../resect.h"
#include "resect_types_private.h"

void copy_location_string(resect_decl decl, char* buffer, size_t size);
resect_error_code simple_sql_execute(sqlite3 *db, const char *sql);
resect_error_code create_resect_decl_insert_statement(sqlite3 *db, sqlite3_stmt **stmt);
resect_error_code insert_declaration_into_sqlite(resect_decl decl, sqlite3 *db , sqlite3_stmt *stmt, resect_bool finalize_stmt);
resect_error_code ensure_resect_runs_table(sqlite3 *db);
resect_error_code ensure_resect_types_table(sqlite3 *db);
resect_error_code ensure_resect_declarations_table(sqlite3 *db);
resect_error_code ensure_sqlite_tables(sqlite3 *db);
resect_error_code ensure_sqlite_db(const char *working_dir, const char *db_name, sqlite3 **db);
resect_error_code insert_declarations_into_sqlite(resect_collection decls, sqlite3 *db);

#endif // RESECT_SQLITE_PRIVATE_H_
