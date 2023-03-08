#include "main.h"
#include <stddef.h>

/**
 * _strchr - this function locates a character in a string
 * @s: this is the string check in
 * @c: this is the character to check for
 * Return: this is 0 when true
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
