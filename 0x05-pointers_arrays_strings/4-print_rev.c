#include "main.h"
#include <string.h>

/**
 * print_rev - this prints the sring in revers
 * @s: this is the string to print
 */

void print_rev(char *s)
{
	int i;
	int j = 0;

	while (*s != '\0')
	{
		j++;
		s++;
	}
	s--;
	for (i = j; i >= 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
