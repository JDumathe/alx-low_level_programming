#include "main.h"

/**
 * _strlen_recursion - this returns the length of a string
 * @s: this is the string
 * Return: this is 0 when true.
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
