#include "holberton.h"
#include <stdlib.h>

int printf_str(va_list args)
{
    char *str;
    int i;

    str = va_arg(args, char*);
    if (str == NULL)
    {
        _printf("(null)");
        va_end(args);
        return (0);
    }
    else if (str == 0)
    {
        return (0);
    }
    else
    {
        for (i = 0; str[i] != '\0'; i++)
        {
            _putchar(str[i]);
        }
    }
    va_end(args);
    return(i);
}


int printf_char(va_list args)
{
	char *caracter = va_arg(args, char*);

	_putchar(caracter[0]);
	return (1);
}
