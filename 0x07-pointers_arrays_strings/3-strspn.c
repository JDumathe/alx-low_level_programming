#include "main.h"

/**
 * _strspn - this function is for finding the length of a prefix string
 * @s: this is the string
 * @accept: this is the prefix string
 * Return: this is 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *j;

	for (i = 0; *s != '\0'; s++)
	{
		for (j = accept; *j != '\0'; j++)
		{
			if (*s == *j)
			{
				i++;
				break;
			}
		}
		if (*j == '\0')
		{
			break;
		}
	}
	return (i);
}
