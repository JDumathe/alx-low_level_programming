#include <stdio.h>
#include <ctype.h>
/**
 * main - this is the main function and it contains all the code
 *
 * Return: this is always 0 if true
*/

int main(void)
{
	int i;

	for (i = 'Z'; i >= 'A'; i--)
	{
		putchar(tolower(i));
	}
	putchar('\n');
	return (0);
}
