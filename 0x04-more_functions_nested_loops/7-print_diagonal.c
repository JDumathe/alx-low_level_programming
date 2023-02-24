#include "main.h"

/**
 * print_diagonal - this prints diagonals
 * @n: this is the lengthof diagonal
 * Return: this is 0
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i <= n; i++)
	{
		if (n == 0 && n < 0)
		{
			continue;
		}
		else
		{
			for (j = 0; j <= n; j++)
			{
				_putchar(' ');
				_putchar('\\');
			}
		}
		_putchar('\n');
	}
}
