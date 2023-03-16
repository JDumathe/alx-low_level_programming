#include "main.h"
#include <stdlib.h>

/**
 * create_array - this creates an array of characters
 * @size: this is the size of the array
 * @c: this is the character
 * Return: this is 0 when true
 */

char *create_array(unsigned int size, char c)
{
	char *j;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	j = malloc(size * sizeof(char));
	if (j == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		j[i] = c;
	}
	return (j);
}
