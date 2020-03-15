#include "holberton.h"
#include <stdarg.h>

/**
 * _printf - Function printf().
 * @format: Pointer
 * Return: Always 0.
 */

int _printf(const char *format, const unsigned int numArgs, ...)
{
    va_list args;

    int i;
  
    va_start(args, numArgs);
    
    for (i = 0; format[i] != "\0"; i++)
    {
      if (format[i] != '%')
      {  
        _putchar(format[i]);
      }
      else
      {
        char siguienteLetra = format[i + 1];
        if (siguienteLetra == 'c')
        {
          char *parametro = va_arg(args, char*);
          _putchar(parametro[0]);
          i++;
        }
        else if (siguienteLetra == 's')
        {
          char *parametro = va_arg(args, char*);
          _printf(parametro, 0);
          i++;
        }
      }
    }
  return (i);
}