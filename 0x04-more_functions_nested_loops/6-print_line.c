#include "main.h"

/**
 * print_line - prints a straight line
 * @n: this is the length of the line
 * Return: this is always 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (n == 0 && n < 0)
		{
			break;
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
