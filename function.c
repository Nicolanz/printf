#include "holberton.h"
#include <stdlib.h>

int printf_str(va_list args)
{
    char *str;
    int i;

    str = va_arg(args, char*);
    if (str == 0)
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
    return(i);
}
