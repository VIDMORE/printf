#include "holberton.h"

int _printf(char *format, ...)
{
	int i, j;
	int bandera = 0;

	forms formlist[] = {
		{'s', printstr},
		{'c', printchar}
	};

	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; j < 2; j++)
			{
				if (format[i + 1] == formlist[j].f)
				{
					formlist[j].print_str(args);
					i++;
					break;
				}
			}

			if (format[i + 1] != formlist[j].f)
				exit(255);
		}
		else
		{
			/**_putchar();*/
		}
	}

	va_end(args);

	return (0);
}
