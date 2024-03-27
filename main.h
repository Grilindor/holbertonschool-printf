#ifndef PRINT_TYPE_H
#define PRINT_TYPE_H
#include <stdarg.h>
int print_string(va_list chec_type);
int print_1_c(va_list chec_type);
int print_d_i(va_list chec_type);
int print_modulo(va_list chec_type);
int _printf(const char *format, ...);
int _putchar(char c);
typedef struct print_type
{
        char *the_format_in_char;
        int (*funcp)();
} array;
#endif /* print_type.h */
