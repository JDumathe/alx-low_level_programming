#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - this function searches a string for any of a set of bytes
 * @s: this is the string
 * @accept: this is another string
 * Return: this is 0 when true
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
