#include "holberton.h"
#include <stdarg.h>
/**
 * printnumber - Prints positive or negative ints
 * @n: Number
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
 * printUn - Prints unsined ints
 * @n: Number
 */
void printUn(unsigned int n)
{
	if (n / 10)
	{
		printUn(n / 10);
	}
	_putchar(n % 10 + '0');
}