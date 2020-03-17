#include "holberton.h"

/**
 * printhex - function that concatenate a hexadecimal
 * @params: params passed in the elypsis
 * @stocker: Buffer
 * Return: Stocker with the new hexadecimal
 */

char *printhex(va_list params, char *stocker)
{
	int num = va_arg(params, int), neg = 1;
	int count = 0, posicion = 0, len, ref, i, j, iter, mod;
	char *p;
	char *a = "0123456789abcdef";
	char temp;

	if (params)
	{
		ref = num;

		if (num < 0)
		{
			num *= -1;
			neg *= -1;
		}

		while (num > 0)
		{
			count++;
			num = num / 16;
		}

		p = malloc(count + 1);
		iter = count;

		while (iter > 0)
		{
			mod = ref % 16;
			mod *= neg;
			p[posicion] = a[mod];
			ref /= 16;
			posicion++;
			iter--;
		}
		p[count] = '\0';

		for (i = 0, j = count - 1; i < count / 2; j--, i++)
		{
			temp = p[i];
			p[i] = p[j];
			p[j] = temp;
		}

		len = _strlen(p);
		_strncat(stocker, p, len);
	}
	return (stocker);
}


/**
 * printint - function that adds a int to the string
 * @params: params passed in the elypsis
 * @stocker: buffer
 * Return: string with the new int
 */

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
		strncat(stocker, format, _strlen(format));
	}

	return (stocker);
}
