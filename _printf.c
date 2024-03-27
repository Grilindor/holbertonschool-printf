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
		/*{"c", print_1_c},*/
		/*{"i", print_d_i},*/
		/*{"%", print_modulo},*/
		{"s", print_string},
		/*{"d", print_d_i},*/
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
		j = 0;
		while(j < 1)/**/
		{
			if (format[i] == '%' && format[i + 1] == check[j].the_format_in_char[0])
			{
				check[j].funcp(chec_type);
				i++;
				break;
			}

			else
			{
				_putchar(format[i]);
			}
			j++;
		}
		j = 0;
		i++;
		count++;
	}
	va_end(chec_type);
	return (count);
}
