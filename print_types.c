#include "main.h"
/**
 * print_1_c - function who print one character
 * @chec_type: it's argument whit a pointer
 * Return: return 1 on success
 **/

int print_1_c(va_list chec_type)
{
	_putchar(va_arg(chec_type, int));
	return (1);
}

/**
 * print_string - function who print a string pointer
 * @chec_type: it's argument whit a pointer
 * Return: i, in link with str
 **/

int print_string(va_list chec_type)
{
	char *str = va_arg(chec_type, char*);
	int i;
/*changing the int on char pointer*/
	if (!str || str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

/**
 * print_d_i - function who print a decimal in output
 * @chec_type: it's argument whit a pointer
 * Return: count
 **/

int print_d_i(va_list chec_type)
{
	int i, numt, buffer, count = 0;
	int num = va_arg(chec_type, int);

	if (num > INT_MAX || num < INT_MIN)
		return (-1);
	if (num < 0)
	{/*change the value in negatif if num is inferior than 0*/
		num *= -1;
		putchar('-');
		count++;
	}
	buffer = num;
/*here we cut  and stock in numt*/
	for (numt = 0; (buffer / 10) > 0; numt++)
		buffer /= 10;
	buffer = num;
/*numt= +xfois long of format, */
	while (numt != 0)
	{
		for (i = 0; i < numt; i++)
			buffer /= 10;
		buffer %= 10;
		_putchar(buffer + '0');
		count++;
		numt--;
		buffer = num;
	}
/*here we print the result and return the count*/
	_putchar(num % 10 + '0');
	count++;
	return (count);
}

/**
 * print_modulo - function who print a pourcentage %
 * @chec_type: it's argument whit a pointer
 * Return: 1
 **/

int print_modulo(va_list chec_type)
{
	(void)chec_type; /*change the parameter of chec_type*/
	return (write(1, "%", 1));
}
