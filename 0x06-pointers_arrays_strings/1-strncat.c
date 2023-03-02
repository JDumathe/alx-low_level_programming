#include "main.h"

/**
 * _strncat - this concantenates
 * @dest: this is appended to
 * @src: this appends from
 * @n: this is n bytes
 * Return: this is always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	return (dest);
}
