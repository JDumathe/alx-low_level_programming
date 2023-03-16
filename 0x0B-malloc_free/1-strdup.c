#include "main.h"
#include <stdlib.h>

/**
 * _strdup - this returns a pointer to an allocated memory
 * @str: this is the string
 * Return: this is 0 when true
 */

char *_strdup(char *str)
{
	char *j;
	int k, i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	if (i == 0)
	{
		return (NULL);
	}
	j = malloc(sizeof(char) * i + 1);
	if (j == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		j[k] = str[k];
	}
	j[i] = '\0';
	return (j);
}
