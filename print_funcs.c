#include "holberton.h"

/**
 * printstr - Function that prints a string
 * @params: Arguments passed in the elypsis
 */

char *printstr(va_list params, char *stocker)
{
	char *str;
	int len;

	if (params)
	{
		str = va_arg(params, char *);
		len =  strlen(str);
		_strncat(stocker, str, len);
	}
	return (stocker);
}

void _printstr(char *stocker)
{
	write(1, stocker, strlen(stocker));
}

/**
 * printchar - Function that prints a char
 * @params: Arguments passed in the elypsis
 */

char * printchar(va_list params, char *stocker)
{
	char chr;
	if (params)
	{
		chr = va_arg(params, int);
		_strncat(stocker, &chr, 1);
	}
	return (stocker);
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

/*void validate_format(char *format, va_list args)
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
}*/

char * printint(va_list params, char * stocker)
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

	return (stocker);
}

/**
* _strncat - concatenates two strings
* @src: First string to append
* @dest: Second string to append
* @n: number of bytes
* Return: Pointer to the resulting string
**/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
	{
		i++;
	}
	for (j = 0; j < n; j++, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}

/* 
* function to reverse a string  
*/
/**
void my_reverse(char str[], int len)
{
    int start, end;
    char temp;
    for(start=0, end=len-1; start < end; start++, end--) {
        temp = *(str+start);
        *(str+start) = *(str+end);
        *(str+end) = temp;
    }
}
 */
/**
char* my_itoa(int num, char* str, int base)
{
    int i = 0;
    bool isNegative = false;
  */
    /* A zero is same "0" string in all base */
    /**if (num == 0) {
        str[i] = '0';
        str[i + 1] = '\0';
        return str;
    }*/
  
    /* negative numbers are only handled if base is 10 
       otherwise considered unsigned number */
    /**if (num < 0 && base == 10) {
        isNegative = true;
        num = -num;
    }
  
    while (num != 0) {
        int rem = num % base;
        str[i++] = (rem > 9)? (rem-10) + 'A' : rem + '0';
        num = num/base;
    }*/
  
    /* Append negative sign for negative numbers */
    /**if (isNegative){
        str[i++] = '-';
    }
  
    str[i] = '\0';
 
    my_reverse(str, i);
  
    return str;
}*/
