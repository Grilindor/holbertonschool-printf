#ifndef PRINT_TYPE_H
#define PRINT_TYPE_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdarg.h>
int print_string(va_list chec_type);
int print_1_c(va_list chec_type);
int print_d_i(va_list chec_type);
int print_modulo(va_list chec_type);
int _printf(const char *format, ...);
int _putchar(char c);

/**
 * struct print_type - link to fill where are the function
 *@the_format_in_char: link with the format in _printf.c
 *@funcp: link who call the funtion
**/
typedef struct print_type
{
	char *the_format_in_char;
	int (*funcp)();
} array;
#endif /* print_type.h */
