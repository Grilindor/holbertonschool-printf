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

/*int print_1_c(va_list chec_type)
{
	_putchar(va_arg(chec_type, char));
	return (1);
}



int print_d_i(va_list chec_type)
{
	int n = va_arg(chec_type, int);
	int count = 0;
	int long[12];
	int index = 0, i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}

	do {
		long[count] = n % 10;
		n /= 10;
		count++;
	} while (n > 0);

	for (i = index - 1; i >= 0; i--)
	{
		putchar('0' + n[i]);
		count++;
	}

	return (count);
}


int print_modulo(va_list chec_type)
{
	(void)chec_type;
	_putchar('%');
	return (1);
	}*/
