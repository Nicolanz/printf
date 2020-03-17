#include <stdarg.h>
#include <stdio.h>
#include "holberton.h"
/**
 * printnumber - prints ints
 * @n: Number
 *
 */
void printnumber(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	if (n / 10)
	{
		printnumber(n / 10);
	}
	_putchar(n % 10 + '0');
}
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
			else if (siguienteLetra == 'i' || siguienteLetra == 'd')
			{
				int num = va_arg(args, int);

				printnumber(num);
				i++;
			}
		}
	}
	return (i);
}
