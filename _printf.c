#include "holberton.h"

int _printf(char *format, ...)
{
	int i, j;

	forms formlist[] = {
		{"s", printstr},
		{"c", printchar},
		{NULL, NULL}
	};

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		validate_format(format, formlist, args);
	}

	va_end(args);

	return (0);
}
