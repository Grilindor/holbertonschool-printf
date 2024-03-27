#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *
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
	int i = 0, j = 0, count = 0;

	va_start(chec_type, format);

	/*if (!format)
	{
		return(NULL);
	}*/

	while (format[i] && format)
	{
		if (format[i] == '%')
		{
			j = 0;
			while(j < 5)
			{
				if (format[i + 1] == check[j].the_format_in_char[0])
				{
					count += check[j].funcp(chec_type);
				}
				j++;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
        }
        va_end(chec_type);
        return (count);
}
