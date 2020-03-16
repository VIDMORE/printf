#include "holberton.h"

char *start_storage(char *stocker, char *format, va_list params)
{
	int i;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			validate_option(stocker, format[i + 1], params);
		}
		else
			stocker[i] = format[i];
	}
	stocker[i] = '\0';
	if(stocker)
	{
		return (stocker);
	}
	return (0);
}

char *validate_option(char *stocker, char format, va_list params)
{
	forms formlist[] = {
		{'s', printstr},
		{'c', printchar},
		{'i', printint},
		{'d', printint},
		{NULL, NULL}
	};
	int i;

	for (i = 0; formlist[i].f; i++)
	{
		if (format == formlist[i].f)
		{
			formlist[i].print_str(params, stocker);
			i++;
			break;
		}
		else if (format == '%')
		{
			printper();
			break;
		}
	}
	if (!formlist[i].f)
		exit(255);

	return (stocker);
}
