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

	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{
			char siguienteLetra = format[i + 1];

			if (siguienteLetra == 'i' || siguienteLetra == 'd')
			{
				int num = va_arg(args, int);

				printnumber(num);
				i++;
			}
			else if (siguienteLetra == 'u')
			{
				int num = va_arg(args, int);

				printUn(num);
				i++;
			}
		}
	}
	return (i);
}
