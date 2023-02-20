#include <stdio.h>
#include <ctype.h>

/**
 * main - this is the main function and holds all the code
 *
 * Return: this is always 0 if true
*/

int main(void)
{
	int m;
	int l;

	for (m = 0; m < 10; m++)
	{
		putchar(m);
	}
	for (l = 'A'; l < 'G'; l++)
	{
		putchar(tolower(l));
	}
	putchar('\n');
	return (0);
}
