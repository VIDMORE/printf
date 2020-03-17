#include "holberton.h"
/**
 * _printf - function that print a formated data
 * @format: string to be formated
 * Return: int
 */
int _printf(char *format, ...)
{
	char stocker[1024];
	va_list params;
	int len;

	if (format)
	{
		va_start(params, format);

		start_storage(stocker, format, params);
		
		if (stocker == NULL)
		{		
			return(-1);
		}
		write(1, &stocker, _strlen(stocker));

		va_end(params);
		len = _strlen(stocker);
		return (len);
	}
	else
	{
		return (-1);
	}
}
