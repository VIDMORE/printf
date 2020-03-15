#include "holberton.h"

/**
 * printstr - Function that prints a string
 * @params: Arguments passed in the elypsis
 */

void printstr(va_list params)
{
	char *str;

	if (params)
	{
		str = va_arg(params, char *);

		write(1, str, strlen(str));
	}
}

/**
 * printchar - Function that prints a char
 * @params: Arguments passed in the elypsis
 */

void printchar(va_list params)
{
	char chr;

	chr = va_arg(params, int);

	write(1, &chr, 1);
}

void _printchar(char chr)
{
	if (chr)
		write(1, &chr, 1);
}

void printper(void)
{
	write(1, "%", 1);
}

void validate_format(char *format, va_list args)
{
	int i = 0, j;
	forms formlist[] = {
		{"s", printstr},
		{"c", printchar},
		{"i", printint},
		{"d", printint},
		{NULL, NULL}
	};

	if (format)
	{
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
	}
}

void printint(va_list params)
{
	char value;

	if (params)
	{
		value = va_arg(params, int) + 48;

		while (value > 0)
		{
			value /= 10;
			write(1, &value, 1);
		}
	}
}
