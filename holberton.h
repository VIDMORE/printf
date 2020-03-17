#ifndef PRINT_F
#define PRINT_F
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
/**
 * struct formats - structure used to identify a function
 * @f: string used as a identifier
 * @print_str: receives a function
 */
typedef struct formats
{
	char *f;
	char * (*print_str)(va_list, char *);
} forms;

int _printf(char *format, ...);
char *printstr(va_list, char *);
char *printchar(va_list, char *);
char *printhex(va_list, char *);
void _printchar(char);
char *printper(char *stocker);
void validate_format(char *, va_list);
char *printint(va_list params, char *);
char *start_stocker(void);
char *start_storage(char *stocker, char *format, va_list params);
char *validate_option(char *stocker, char format, va_list params);
char *_strncat(char *dest, char *src, int n);
void my_reverse(char str[], int len);
char *my_itoa(int num, char *str, int base);
#endif
