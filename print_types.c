#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *
 **/

int print_string(va_list chec_type)
{
	char *str = va_arg(chec_type, char*);
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

int print_1_c(va_list chec_type)
{
	_putchar(va_arg(chec_type, char));
	return (1);
}


/**
*Decimal , les chiffre en entier
**/

Int print_d_i(va_list chec_type)
{
	
}

/**
 *modulo
 **/

int print_modulo(va_list chec_type)
{
	(void)chec_type;
	_putchar('%');
	return (1);
}
