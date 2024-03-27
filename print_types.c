#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *
 **/

int print_1_c(va_list chec_type)
{
        _putchar(va_arg(chec_type, int));
        return (1);
}

int print_string(va_list chec_type)
{
	char *str = va_arg(chec_type, char*);
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}

int print_d_i(va_list chec_type)
{
	int i, numt, buffer, count = 0;
	int num = va_arg(chec_type, int);

	if (num < 0)
	{
		num *= -1;
		putchar('-');
		count ++;
	}
	buffer = num;

	for (numt = 0; (buffer / 10) > 0; numt ++)
		buffer /= 10;
	buffer = num;

	while (numt != 0)
	{
		for(i = 0; i < numt; i ++)
			buffer /= 10;
		buffer %= 10;
		_putchar(buffer + '0');
		count++;
		numt--;
		buffer = num;
	}
	_putchar(num % 10 + '0');
	/*_putchar((num / 10) + '0');*/
	count++;
	return (count);
}

/*int print_d_i(va_list chec_type)
{
	int n = va_arg(chec_type, int);
	int count = 0;
	int array[12];
	int index = 0, i;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}

	do {
		array[index++] = n % 10;
		n /= 10;
	} while (n > 0);

	for (i = index - 1; i >= 0; i--)
	{
		putchar('0' + array[i]);
		count++;
	}

	return (count);
}
*/

int print_modulo(va_list chec_type)
{
	(void)chec_type;
	_putchar('%');
	return (1);
	}
