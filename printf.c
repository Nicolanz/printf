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
	int s = 0;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		char nextLetter = format[i + 1];
		char letter = format[i];

		if (letter == '%' && nextLetter == 's')
		{
			s += printf_str(args);
			i++;
		}

		else if (letter == '%' && nextLetter == 'c')
		{
			s += printf_char(args);
			i++;
		}
		else
		{
			_putchar(format[i]);
			s++;
		}
	}

	va_end(args);
	return (s);
}
