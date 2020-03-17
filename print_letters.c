#include "holberton.h"

/**
 * printstr - Function that prints a string
 * @params: Arguments passed in the elypsis
 * @stocker: Buffer
 * Return: buffer with the new string
 */

char *printstr(va_list params, char *stocker)
{
	char *str;
	int len;

	if (params)
	{
		str = va_arg(params, char *);
		len =  _strlen(str);
		_strncat(stocker, str, len);
	}
	return (stocker);
}

/**
 * printchar - Function that prints a char
 * @params: Arguments passed in the elypsis
 * @stocker: buffer
 * Return: stocker with the char
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

/**
 * printper - function that prints a %
 * @stocker: buffer
 * Return: Buffer with the %
 */

char *printper(char *stocker)
{
	int len;

	len = _strlen(stocker);
	stocker[len] = '%';
	stocker[len + 1] = '\0';
	return (stocker);
i}
