#include <stdio.h>

/**
 * main - this is the main function and it contains all the code
 *
 * Return: this is always 0 if true
*/

int main(void)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
