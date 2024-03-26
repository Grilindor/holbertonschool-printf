#include "main.h"
#include "print_type.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 *
 **/

void print_string(va_list chec_type)
{
	
}

void print_1_c(va_list chec_type)
{
	
}

void print_int(va_list chec_type)
{

}

void print_d(va_list chec_type)
{

}
int _printf(const char *format, ...)
{
	array check[] = {
		{"c", print_1_c},
		{"i", print_int},
		{"%", printfloat},
		{"s", print_string},
		{"d", print_d},
		{NULL, NULL}
	};


	va_list chec_type;
	int i = 0, j = 0, count = 0;

	va_start(chec_type, format);

	if (!format)
	{
		return(NULL);
	}

	while (format[i] && format)
	{
		j = 0;
		while(j < 5)
		{
			if (format[i] == check[j].the_format_in_char[0])
			{
				check[j].Funcp(chec_type);
			}
			j++;
		}
		j = 0;
		i++;
		count++;
	}
	return (count);
	va_end(chec_type);
}
