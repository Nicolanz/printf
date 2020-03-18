#include "holberton.h"
/**
 * _printf - Function printf().
 * @format: String to print
 * Return: Printed.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, num, printed = 0;
	char siguienteLetra;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			printed++;
		}
		else
		{
			siguienteLetra = format[i + 1];
			if (siguienteLetra == 'i' || siguienteLetra == 'd')
			{
				printnumber(&printed, va_arg(args, int));
				i++;
			}
			else if (siguienteLetra == 'c')
			{
				_putchar(va_arg(args, int));
				printed++;
				i++;
			}
			else if (siguienteLetra == 's')
			{
				printstring(&printed, args);
				i++;
			}
			else if (siguienteLetra == '\0')
				return (-1);
			else
			{
				if (siguienteLetra != '%')
				{
					_putchar('%');
					printed++;
				}
				_putchar(siguienteLetra);
				printed++;
				i++;
			}
		}
	}
	va_end(args);
	return (printed);
}
