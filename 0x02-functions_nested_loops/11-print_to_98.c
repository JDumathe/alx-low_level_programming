#include "main.h"

/**
 * print_to_98 - this function prints natural numbers from n to 98
 * @n: this is the first value in the list
 * Return: this is always 0 when true
 */

void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	
	}

	else if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
	else if (n < 0)
	{
		for (i = n; i < 98; i++)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
