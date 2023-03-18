#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - this concatenates two strings
 * @s1: this is string 1
 * @s2: this is string 2
 * @n: this is the number of characters to add
 * Return: this is 0 when true
 */

#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n) {
	char *concatenated_string;
	unsigned int s1_len = 0, s2_len = 0, i, j;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[s1_len] != '\0')
	{
		s1_len++;
	}

	while (s2[s2_len] != '\0')
	{
		s2_len++;
	}

	if (n >= s2_len)
	{
		n = s2_len;
	}

	concatenated_string = malloc(sizeof(char) * (s1_len + n + 1));

	if (concatenated_string == NULL)
	{
		return NULL;
	}

	for (i = 0; i < s1_len; i++)
	{
		concatenated_string[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		concatenated_string[i + j] = s2[j];
	}

	concatenated_string[i + j] = '\0';

	return (concatenated_string);
}
