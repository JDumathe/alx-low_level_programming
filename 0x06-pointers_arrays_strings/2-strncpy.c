#include "main.h"

/**
 * _strncpy - this function copies a string
 * @dest: the string to copy to
 * @src: the string to copy
 * @n: this is the number of bytes
 * Return: this is 0 when true
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n/* && dest[i] != '\0'*/; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
