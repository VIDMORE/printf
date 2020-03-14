#include "holberton.h"

/**
 * printstr - Function that prints a string
 * @params: Arguments passed in the elypsis
 */

void printstr(va_list params)
{
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
	char chr;

	chr = va_arg(params, int);

	write(1, &chr, 1);
}

void _printchar(char chr)
{
	if (chr)
		write(1, &chr, 1);
}

void printper(void)
{
		write(1, "%", 1);
}
