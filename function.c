#include "holberton.h"
/**
* printstring - Prints Strings
* @ptr: Pointer to count the string
* @args: Arguments to evaluate.
*/
void printstring(int *ptr, va_list args)
{
	int i = 0;
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		string = "(null)";
	}
	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
		(*ptr)++;
	}
}
/**
 * printnumber - Prints positive or negative ints
 * @ptr: Pointer to count string
 * @n: Number
 */
void printnumber(int *ptr, int n)
{
	unsigned int m = 0;

	if (n < 0)
	{
		m = -n;
		_putchar('-');
		(*ptr)++;
	}
	else
	{
		m = n;
	}
	if (m / 10)
	{
		printnumber(ptr, m / 10);
	}
	_putchar((m % 10) + '0');
	(*ptr)++;
}
/**
 * printUn - Prints unsined ints
 * @ptr: Pointer to count the string
 * @n: Number
 */
void printUn(int *ptr, unsigned int n)
{
	if (n / 10)
	{
		printUn(ptr, n / 10);
	}
	_putchar(n % 10 + '0');
	(*ptr)++;
}
