#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _printf - Function printf, take format s and c().
 * @format: Pointer
 * Return: Always 0.
 */

int _printf(const char *format, ...)
{
    va_list args;

    int i;

    va_start(args, format);
    if (format == " ")
    {
        va_end(args);
        return (0);
    }
    if (format == NULL)
    {
        _printf("(null)");
        va_end(args);
        return (0);
    }
    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            _putchar(format[i]);
        }
        else
        {
            char nextLetter = format[i + 1];

            if (nextLetter == 'c')
            {
                char parametroChar = va_arg(args, char*);

                _putchar(parametroChar);
                i++;
            }

            else if (nextLetter == 's')
            {
                char *parametro = va_arg(args, char*);

                _printf(parametro, 0);
                i++;
            }

        }
    }

    va_end(args);
    return (i);
}
