#include "holberton.h"

/**
 * printstr - Function that prints a string
 * @params: Arguments passed in the elypsis
 */

void printstr(va_list params)
{
	int i;
	char *str;

	if (params)
	{
		str = va_arg(params, char *);

		write(1, str, strlen(str));
	}
}

/**
 * printchar - Function that prints a char
 * @params: Arguments passed in the elypsis
 */

void printchar(va_list params)
{
	int i;
	char chr;
	
	if (params)
	{
		chr = va_arg(params, int);

		write(1, &chr, 1);
	}
}
