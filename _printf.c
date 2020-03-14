#include "holberton.h"

int _printf(char *format, ...)
{
	int i;
	va_list args;
	int bandera = 0;
	va_start(args, sformat);

	forms formlist[] = {
		{'s', printstr}
		{'c', printchar}
	};

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; j < 2; j++)
			{
				if (format[i + 1] == formlist[j].f)
				{
					formlist[j].(args);
					i++;
					break;
				}
			}

			if (format[i + 1] != formlist[j].f)
				exit(255);
		}
		else
		{
			_putchar();
		}
	}

	va_end(args);
}
