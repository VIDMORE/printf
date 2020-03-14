#ifdef HOLBERTON_H
#define HOLBERTON_H

#define <stdarg.h>
#define <stdio.h>
#define <stdlib.h>
#define <unistd.h>
typedef struct formats
{
	char f;
	void (*print_str)(va_list);
} forms;

int _printf(char *format, ...)
void printstr(va_list);
void printchar(va_list);

#endif
