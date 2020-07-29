#include "pathfinder.h"



void mx_errors_main(int argc, char **argv) {
    char *string = NULL;
    int line_count = 1;
    char *head = NULL;

    mx_error1(argc);
    mx_error_file_or_dir(argv[1]);
    mx_error_file_empty(argv[1]);
    string = mx_file_to_str(argv[1]);
    head = string;
    string = mx_error_file_invalid(&line_count, string);
    mx_error_file_invalid_2(&line_count, string);
}

