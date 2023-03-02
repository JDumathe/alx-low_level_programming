#include "main.h"

/**
 * puts_half - this prints half of a string
 * @str: this is the string to print
 */

void puts_half(char *str)
{
	int i, j, n;
	int k = 0;
	char *h = str;

	while (*h != '\0')
	{
		h++;
		k++;
	}
	j = k -1;
	for (i = 0; i <= j; i++)
	{
		if (j % 2 == 0 && i > j / 2)
		{
			_putchar(str[i]);
		}
		else if (j % 2 != 0)
		{
			n = (j - 1) / 2;
			if (i > n)
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
