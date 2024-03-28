#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
*_printf - this is the type of the format argument
*@format: argument that contains the formatting of the str to be printed.
* Return: return the correct type of format to print
**/
int _printf(const char *format, ...)
{
        array check[] = {
                {"i", print_d_i},
                {"%", print_modulo},
                {"s", print_string},
                {"c", print_1_c},
                {"d", print_d_i},
                {NULL, NULL}
        };
        va_list chec_type;
        int i = 0, j = 0, count = 0; /* declaration of three integer variables*/
        va_start(chec_type, format); /* va_start initializes va_list*/
        if (!format)
                return (-1);
        while (format[i] && format) /**checks that the format s-tring exists and
                                      *has not been terminated**/
        {
                if (format[i] == '%')
                {
                        j = 0;
                        while (j < 5)
                        {/**checks the character following the %( format[i + 1]) = the first
                          *character in the checkstructure**/
                                if (format[i + 1] == check[j].the_format_in_char[0])
                                        count += check[j].funcp(chec_type);
                                j++;
                        }
                        i++;
                }
                else
                {
                        _putchar(format[i]);/*executed if pre condit is true*/
                        count++;
                }
                i++;
        }
        va_end(chec_type);  /*va_end clean up the va_list*/
        return (count);
}
