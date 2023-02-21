#include <stdio.h>
#include <ctype.h>

/**
 * main - this is the main function and it stores all the code
 *
 * Return: this is always 0 if true
*/
int main(void)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(tolower(i));
	}
	putchar('\n');
	return (0);
}
