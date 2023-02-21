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
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
