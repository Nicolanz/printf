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
 *
 *
 *
 *
 */
void printUn(unsigned int n)
{
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
	int s;

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
		}
	}

	va_end(args);
	return (i);
}
