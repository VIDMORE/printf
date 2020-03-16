#include "holberton.h"

int _printf(char *format, ...)
{
	char stocker[1024];
	va_list params;

	if (format)
	{
		va_start(params, format);

		/*stocker = start_stocker();*/

		start_storage(stocker, format, params);		

		write(1, &stocker, strlen(stocker));
		
		/*validate_format(format, params);*/

		va_end(params);
	}

	return (0);
}
