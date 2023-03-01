#include "main.h"
#include <string.h>

/**
 * print_rev - this prints the sring in revers
 * @s: this is the string to print
 */

void print_rev(char *s)
{
	/*
	char str[62] = s;
	int j;

	for (j = 62; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	*/
	int i, len, temp;

	len = strlen(s); 
	/* use strlen() to get the length of str string*/

	/* use for loop to iterate the string*/
	for (i = 0; i < len/2; i++)
	{
	/* temp variable use to temporary hold the string*/
	temp = s[i];
	s[i] = s[len - i - 1];
	s[len - i - 1] = temp;
	}
}
