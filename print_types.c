#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *
 **/

int print_string(va_list chec_type)
{
	char *str = va_arg(chec_type, int);
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (str);
}

int print_1_c(va_list chec_type)
{
	_putchar(va_arg(chec_type, int));
	return (1);
}

int print_int(va_list chec_type)
{
	int *i = va_arg(chec_type, int);
	int j;
	for (j = 0; i[j] != '\0'; j++)
		_putchar(i[j]);
	return (i);
}

/**
*Decimal , les chiffre en entier
**/

Int print_d(va_list chec_type)
{
	 *n = va_arg(chec_type, int);
	
}

/**
 *modulo
 **/

int print_modulo(va_list chec_type)
{
	return (puts("%"));
}
