#include <stdio.h>
#include <ctype.h>

/**
 * main - this is the main function and it stores all the code
 *
 * Return: this is always 0 if true
*/
int main(void)
{
	for (int i = 'A'; i <= 'Z'; i++)
	{
		if (i == 'Q' || i == 'E')
		{
			continue;
		}
		else
		{
			putchar(tolower(i));
		}
	}
	putchar('\n');
	return (0);
}
