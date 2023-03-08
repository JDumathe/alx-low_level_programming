#include "main.h"

/**
 * _memcpy - this copies the memory from one string to another
 * @dest: this is being copied to
 * @src: this is being copied from
 * @n: this is the byte size
 * Return: this is 0 when true
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
