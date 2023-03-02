#include "main.h"

/**
 * _strcat - this function appends
 * @dest: this is to be appended to
 * @src: to append from this
 * Return: this is 0 when true
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	return (dest);
}
