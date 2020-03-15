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

void validate_format(char *format, form formlist, va_list args)
{
	int i = 0, j;

	if (format)
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
					_printper();
					i++;
					break;
				}
			}
			if (!formlist[j].f)
				exit(255);
		else
			_printchar(format[i]);
	}
}
