#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: value to be checked
 * Return: this is is based on the sign of the value
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
