#include "main.h"

/**
 * print_last_digit - this function prints the last digit of a number
 * @i: this is the parameter to check
 * Return: this is 0 when true
 */

int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (i < 0)
	{
		j = -j;
	}
	_putchar(j + '0');
	return (j);
}
