#include "holberton.h"

char *start_stocker(void)
{
	char *stocker[1024];

	return (&stocker);
}

char *start_storage(char *stocker, char *format, va_list params)
{
	int i, j;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			
		}
		else
			stocker[i] += format[i];
	}
}
