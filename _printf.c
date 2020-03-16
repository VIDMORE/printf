#include "holberton.h"

int _printf(char *format, ...)
{
	char *stocker;
	va_list params;

	if (format)
	{
		va_start(args, format);

		stocker = start_stocker();
		
		start_stocker(stocker, format, params);
		
		validate_format(format, args);

		va_end(args);
	}

	return (0);
}
