#ifndef PRINT_F
#define PRINT_F
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct formats
{
	char f;
	char * (*print_str)(va_list, char *);
} forms;

int _printf(char *format, ...);
char * printstr(va_list, char *);
char * printchar(va_list, char *);
void _printchar(char);
void printper(void);
void validate_format(char *, va_list);
char * printint(va_list params, char *);
char *start_stocker(void);
char *start_storage(char *stocker, char *format, va_list params);
char *validate_option(char *stocker, char format, va_list params);
char *_strncat(char *dest, char *src, int n);
#endif
