#include "main.h"

/**
 * is_palindrome - this checks if a string is a palindrome
 * @s: this is the string
 * Return: this is 0 when true
 */

#include <string.h>

int is_palindrome(char *s)
{
	if (s[0] < '\0')
	{
		return (0);
	}
	return (is_palindrome(s, s + 1));
}
