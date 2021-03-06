cmake_minimum_required(VERSION 3.16)
project(ppppp)

set(CMAKE_CXX_STANDARD 14)

include_directories(inc)
include_directories(libmx/inc)

add_executable(ppppp
        inc/pathfinder.h
        libmx/inc/libmx.h
        libmx/obj/mx_binary_search.o
        libmx/obj/mx_bubble_sort.o
        libmx/obj/mx_count_substr.o
        libmx/obj/mx_count_words.o
        libmx/obj/mx_create_node.o
        libmx/obj/mx_del_extra_spaces.o
        libmx/obj/mx_del_strarr.o
        libmx/obj/mx_file_to_str.o
        libmx/obj/mx_foreach.o
        libmx/obj/mx_get_char_index.o
        libmx/obj/mx_get_substr_index.o
        libmx/obj/mx_hex_to_nbr.o
        libmx/obj/mx_is_odd.o
        libmx/obj/mx_isalpha.o
        libmx/obj/mx_isdigit.o
        libmx/obj/mx_islower.o
        libmx/obj/mx_isupper.o
        libmx/obj/mx_itoa.o
        libmx/obj/mx_list_size.o
        libmx/obj/mx_memccpy.o
        libmx/obj/mx_memchr.o
        libmx/obj/mx_memcmp.o
        libmx/obj/mx_memcpy.o
        libmx/obj/mx_memmem.o
        libmx/obj/mx_memmove.o
        libmx/obj/mx_memrchr.o
        libmx/obj/mx_memset.o
        libmx/obj/mx_nbr_length.o
        libmx/obj/mx_nbr_to_hex.o
        libmx/obj/mx_pop_back.o
        libmx/obj/mx_pop_front.o
        libmx/obj/mx_pow.o
        libmx/obj/mx_print_strarr.o
        libmx/obj/mx_print_unicode.o
        libmx/obj/mx_printchar.o
        libmx/obj/mx_printerr.o
        libmx/obj/mx_printint.o
        libmx/obj/mx_printstr.o
        libmx/obj/mx_push_back.o
        libmx/obj/mx_push_front.o
        libmx/obj/mx_quicksort.o
        libmx/obj/mx_realloc.o
        libmx/obj/mx_replace_substr.o
        libmx/obj/mx_sort_list.o
        libmx/obj/mx_sqrt.o
        libmx/obj/mx_str_reverse.o
        libmx/obj/mx_strcat.o
        libmx/obj/mx_strcmp.o
        libmx/obj/mx_strcpy.o
        libmx/obj/mx_strdel.o
        libmx/obj/mx_strdup.o
        libmx/obj/mx_strjoin.o
        libmx/obj/mx_strlen.o
        libmx/obj/mx_strncmp.o
        libmx/obj/mx_strncpy.o
        libmx/obj/mx_strndup.o
        libmx/obj/mx_strnew.o
        libmx/obj/mx_strsplit.o
        libmx/obj/mx_strstr.o
        libmx/obj/mx_strtrim.o
        libmx/obj/mx_swap_char.o
        libmx/obj/mx_toupper.o
        libmx/src/mx_binary_search.c
        libmx/src/mx_bubble_sort.c
        libmx/src/mx_count_substr.c
        libmx/src/mx_count_words.c
        libmx/src/mx_create_node.c
        libmx/src/mx_del_extra_spaces.c
        libmx/src/mx_del_strarr.c
        libmx/src/mx_file_to_str.c
        libmx/src/mx_foreach.c
        libmx/src/mx_get_char_index.c
        libmx/src/mx_get_substr_index.c
        libmx/src/mx_hex_to_nbr.c
        libmx/src/mx_is_odd.c
        libmx/src/mx_isalpha.c
        libmx/src/mx_isdigit.c
        libmx/src/mx_islower.c
        libmx/src/mx_isupper.c
        libmx/src/mx_itoa.c
        libmx/src/mx_list_size.c
        libmx/src/mx_memccpy.c
        libmx/src/mx_memchr.c
        libmx/src/mx_memcmp.c
        libmx/src/mx_memcpy.c
        libmx/src/mx_memmem.c
        libmx/src/mx_memmove.c
        libmx/src/mx_memrchr.c
        libmx/src/mx_memset.c
        libmx/src/mx_nbr_length.c
        libmx/src/mx_nbr_to_hex.c
        libmx/src/mx_pop_back.c
        libmx/src/mx_pop_front.c
        libmx/src/mx_pow.c
        libmx/src/mx_print_strarr.c
        libmx/src/mx_print_unicode.c
        libmx/src/mx_printchar.c
        libmx/src/mx_printerr.c
        libmx/src/mx_printint.c
        libmx/src/mx_printstr.c
        libmx/src/mx_push_back.c
        libmx/src/mx_push_front.c
        libmx/src/mx_quicksort.c
        libmx/src/mx_realloc.c
        libmx/src/mx_replace_substr.c
        libmx/src/mx_sort_list.c
        libmx/src/mx_sqrt.c
        libmx/src/mx_str_reverse.c
        libmx/src/mx_strcat.c
        libmx/src/mx_strcmp.c
        libmx/src/mx_strcpy.c
        libmx/src/mx_strdel.c
        libmx/src/mx_strdup.c
        libmx/src/mx_strjoin.c
        libmx/src/mx_strlen.c
        libmx/src/mx_strncmp.c
        libmx/src/mx_strncpy.c
        libmx/src/mx_strndup.c
        libmx/src/mx_strnew.c
        libmx/src/mx_strsplit.c
        libmx/src/mx_strstr.c
        libmx/src/mx_strtrim.c
        libmx/src/mx_swap_char.c
        libmx/src/mx_toupper.c
        libmx/libmx.a
        libmx/Makefile
        obj/errors/mx_error1.o
        obj/errors/mx_error_file_empty.o
        obj/errors/mx_error_file_invalid.o
        obj/errors/mx_error_file_invalid_2.o
        obj/errors/mx_error_file_or_dir.o
        obj/errors/mx_errors_main.o
        obj/main/main.o
        src/errors/mx_error1.c
        src/errors/mx_error_file_empty.c
        src/errors/mx_error_file_invalid.c
        src/errors/mx_error_file_invalid_2.c
        src/errors/mx_error_file_or_dir.c
        src/errors/mx_errors_islands.c
        src/errors/mx_errors_main.c
        src/main/main.c
        islands
        Makefile
        pathfinder)
