//
// Created by Joel Boehland 12/06/2023.
//
#include "../resect.h"
#include "resect_private.h"
#include "resect_sqlite_private.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <getopt.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <libgen.h>

#include <clang-c/Index.h>
#include <clang-c/CXCompilationDatabase.h>
#include <clang-c/CXErrorCode.h>

int main(int argc, char **argv) {
  char *header_file;
  char *working_dir;
  char *db_name = "resect.sqlite";
  sqlite3 *db;

  resect_parse_options options = resect_options_create();
  parse_argv_options(options, &header_file, &working_dir, argc, argv);

  if((check_file_exists(header_file) != 0) ||
     (ensure_directory_exists(working_dir) != 0)) {
    exit(-1);
  }
  /* resect_options_print_diagnostics(options); */
  /* resect_options_single_header(options); */

  printf("dump_to_sqlite ===> Parsing %s. Using %s as root directory for saved artifacts.\n", header_file, working_dir);

  resect_translation_unit context = resect_parse_tu2(header_file, working_dir, options);
  if(context == NULL) {
    fprintf(stderr, "Error! Failed to parse translation unit.\n");
    exit(-1);
  }

  resect_options_free(options);

  printf("LANGUAGE: %d\n", resect_unit_get_language(context));

  int rc = ensure_sqlite_db(working_dir, db_name, &db);
  if(rc != RESECT_OK || db == NULL) {
    fprintf(stderr, "Error! Failed to create sqlite database: RC: %d, DB: %p\n", rc, db);
    exit(-1);
  }
  resect_collection decls = resect_unit_declarations(context);
  /* print_declarations(decls); */
  insert_declarations_into_sqlite(decls, db);
  resect_free(context);
  sqlite3_close(db);

  return 0;
}
