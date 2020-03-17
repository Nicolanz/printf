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
  char *s;

  va_start(args, format);

  for (i = 0; format[i] != '\0'; i++)
  {
    if (format[i] != '%')
    {
      _putchar(format[i]);
    }
    if (format[i] == 's')
    {
      s += printf_str(args);
    }
  }
  return(i);
}