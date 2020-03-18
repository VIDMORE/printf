#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "holberton.h"

int main(void)
{
	int len, len2;
	long int l = INT_MAX;

	l += 1024;
	len = _printf("%d\n", l);
	_printf("%d\n", -1024);
	_printf("%d\n", 0);
	_printf("%d - %d = %d\n", 1024, 2048, -1024);
	_printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
	return (0);
}
