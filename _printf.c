#include "holberton.h"

void _printf(char *sformat, ...)
{
	va_list args;

	va_start(args, sformat);

	forms formlist[] = {
		{'s', printstr}
		{'c', printchar}
	} 
}
