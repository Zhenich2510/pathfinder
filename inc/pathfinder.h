#ifndef PATHFINDER_H
#define PATHFINDER_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <fcntl.h>
#include "libmx.h"

void mx_errors_main(int argc, char **argv);
void mx_error1(int argc);
void mx_error_file_or_dir(char *str);
void mx_error_file_empty(char *file);
char *mx_error_file_invalid(int *line_count, char *string);
void mx_error_file_invalid_2(int *line_count, char *string);


#endif
