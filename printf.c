#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _printf - Function printf().
 * @format: Pointer
 * Return: Always 0.
 */

int _printf(const char *format, ...)
{
  va_list args;
  int i;
  int s;

  va_start(args, format);

  for (i = 0; format[i] != '\0'; i++)
  {
    char nextLetter = format[i + 1];
    if (format[i] != '%')
    {
      _putchar(format[i]);
    }
    else 
    {
      if (nextLetter == 's')
      {
        s += printf_str(args);
        i++;
      }

      else if (nextLetter == 'c')
      {
        s += printf_char(args);
        i++;
      }
    }
  }
  va_end(args);
  return(i);
}