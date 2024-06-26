#include "main.h"
/**
*_printf - function returns an integer representing the number of characters
*@format: argument that contains the formatting of the str to be printed.
* Return: return the correct type of format to print
**/
int _printf(const char *format, ...)
{
	array check[] = {
		{"i", print_d_i}, {"%", print_modulo}, {"s", print_string},
		{"c", print_1_c}, {"d", print_d_i}, {NULL, NULL}
	};
	va_list chec_type;
	int i = 0, j = 0, count = 0; /* declaration of three integer variables*/

	va_start(chec_type, format); /* va_start initializes va_list*/

	if (!format || !format[i + 1])
		return (-1);
	while (format[i]) /**checks format s-tring exists and not terminated**/
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != 'c' && format[i + 1] != 's' && format[i + 1] != 'd'
			    && format[i + 1] != 'i' && format[i + 1] != '%')
				return (-2);
			j = 0;
			while (j < 5)
			{
				if (format[i + 1] == check[j].the_format_in_char[0])
				{
					count += check[j].funcp(chec_type);
					break;
				}
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
