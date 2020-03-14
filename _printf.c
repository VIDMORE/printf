#include "holberton.h"

int _printf(char *format, ...)
{
	int i, j;

	forms formlist[] = {
		{"s", printstr},
		{"c", printchar},
		{"%", printper},
		{NULL, NULL}
	};

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; j < 2; j++)
			{
				if (format[i + 1] == *formlist[j].f && format[i + 1] != '%')
				{
					formlist[j].print_str(args);
					i++;
					break;
				}
				else if (format[i + 1] == '%')
				{
					printper();
					i++;
                                        break;
				}
			}
			if (!formlist[j].f)
				exit(255);
		}
		else
		{
			_printchar(format[i]);
		}
	}

	va_end(args);

	return (0);
}
