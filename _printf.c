#include "holberton.h"

int _printf(char *format, ...)
{

	va_list args;

	va_start(args, format);

	validate_format(format, args);

	va_end(args);

	return (0);
}
