#ifndef PRINT_F
#define PRINT_F
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct formats
{
	char *f;
	void (*print_str)(va_list);
} forms;

int _printf(char *format, ...);
void printstr(va_list);
void printchar(va_list);
void _printchar(char);
void printper(void);
void validate_format(char *, va_list);
void printint(va_list params);
#endif
