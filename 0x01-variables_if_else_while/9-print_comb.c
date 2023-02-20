#include <stdio.h>

/**
 * main - this is the main function and it holds all the code
 *
 * Return: this is always 0 when true
*/

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
