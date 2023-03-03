#include "main.h"

/**
 * _strcmp - this function compares 2 strings
 * @s1: this is the string to compare
 * @s2: this is the string to compare
 * Return: this is 0 when true
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			return (0);
		}
		else if (s1[i] < s2[i])
		{
			return (-15);
		}
		else
		{
			return (15);
		}
	}
	return (0);
}
