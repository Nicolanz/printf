#include "holberton.h"
#include <stdlib.h>

/**
 * printf_str - Function printf string.
 * @args: arguments
 * Return: Always 0.
 */
int printf_str(va_list args)
{
	char *str;
	int i;

	str = va_arg(args, char*);
	if (str == NULL)
	{
		_printf("(null)");
		va_end(args);
		return (0);
	}
	else if (str == 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	va_end(args);
	return (i);
}

/**
 * printf_char - Function printf char.
 * @args: arguments
 * Return: Always 0.
 */
int printf_char(va_list args)
{
	char caracter = va_arg(args, char*);

	_putchar(caracter);
	return (1);
}
