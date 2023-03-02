#include "main.h"

/**
 * puts2 - this prints every other element in an array
 * @str: this is the string to print
 */

void puts2(char *str)
{
	int i;
	int k = 0;
	int j = 0;
	char *l = str;

	while (*l != '\0')
	{
		l++;
		j++;
	}
	k = j - 1;
	for (i = 0; i <= k; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
