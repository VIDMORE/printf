#include "holberton.h"

/**
 * printstr - Function that prints a string
 * @params: Arguments passed in the elypsis
 */

char *printstr(va_list params, char *stocker)
{
	char *str;
	int len;

	if (params)
	{
		str = va_arg(params, char *);
		len =  strlen(str);
		_strncat(stocker, str, len);
	}
	return (stocker);
}
char *printhex(va_list params, char *stocker)
{
	int num = va_arg(params, int);
	int count = 0, posicion = 0, len, ref = num;
	char *p;
	char *a = "0123456789abcdef";

	if (params)
	{
		while (num > 0)
		{
			count++;
			num = num / 16;
		}

		p = malloc(count + 1);

		while (ref > 0)
		{
			p[posicion] = a[ref % 16];
			ref /= 16;
			posicion++;
		}
		p[count] = '\0';
		len = strlen(p);
		_strncat(stocker, p, len);
	}
	return (stocker);
}
void _printstr(char *stocker)
{
	write(1, stocker, strlen(stocker));
}

/**
 * printchar - Function that prints a char
 * @params: Arguments passed in the elypsis
 */

char *printchar(va_list params, char *stocker)
{
	char chr;

	if (params)
	{
		chr = va_arg(params, int);
		_strncat(stocker, &chr, 1);
	}
	return (stocker);
}

char *printper(char *stocker)
{
	int len;

	len = strlen(stocker);
	stocker[len] = '%';
	stocker[len + 1] = '\0';
	return (stocker);
}

char *printint(va_list params, char *stocker)
{
	int value;
	char format[1024];

	if (params)
	{
		value = va_arg(params, int);

		my_itoa(value, format, 10);

		while (value > 0)
		{
			value /= 10;
		}
		strncat(stocker, format, strlen(format));
	}

	return (stocker);
}

/**
 * _strncat - concatenates two strings
 * @src: First string to append
 * @dest: Second string to append
 * @n: number of bytes
 * Return: Pointer to the resulting string
 **/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	for (j = 0; j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
/*
 * function to reverse a string
 */

void my_reverse(char str[], int len)
{
	int start, end;
	char temp;

	for (start = 0, end = len - 1; start < end; start++, end--)
	{
		temp = *(str + start);
		*(str + start) = *(str + end);
		*(str + end) = temp;
	}
}


char *my_itoa(int num, char *str, int base)
{
	int i = 0;
	int isNegative = 0;


	/* A zero is same "0" string in all base */
	if (num == 0)
	{
		str[i] = '0';
		str[i + 1] = '\0';
		return (str);
	}

	if (num < 0 && base == 10)
	{
		isNegative = 1;
		num = -num;
	}

	while (num != 0)
	{
		int rem = num % base;

		str[i++] = (rem > 9) ? (rem - 10) + 'A' : rem + '0';
		num = num / base;
	}

	/* Append negative sign for negative numbers */
	if (isNegative)
	{
		str[i++] = '-';
	}

	str[i] = '\0';

	my_reverse(str, i);

	return (str);
}
