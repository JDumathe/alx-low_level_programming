#include "main.h"

/**
 * _memset - this fills memory with constant bytes
 * @s: this is the pointer
 * @b: this is a string
 * @n: the bytes to fill
 * Return: this is 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	/*char *j = s;*/

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
