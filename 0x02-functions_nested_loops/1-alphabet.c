#include "main.h"

/**
 * print_alphabet - this prints out the alphabets
 * Return: this is always 0
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
