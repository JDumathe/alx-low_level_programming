#include "main.h"
#include <stdlib.h>

/**
 * str_concat - this function concatenates 2 strings
 * @s1: this is the first string
 * @s2: this is the second string
 * Return: this is 0 when true
 */

char *str_concat(char *s1, char *s2)
{
	int i, l, j = 0;
	int m = 0;
	char *k;

	while (s1[j] != '\0')
	{
		j++;
	}
	while (s2[m] != '\0')
	{
		m++;
	}
	l = m + j;
	k = malloc(sizeof(char) * l);
	if (k == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < j; i++)
	{
		k[i] = s1[i];
	}
	for (i = 0; i < m; i++)
	{
		k[j + i] = s2[i];
	}
	k[l] = '\0';
	return (k);
}
