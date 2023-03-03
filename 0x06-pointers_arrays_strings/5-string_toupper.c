#include "main.h"

/**
 * string_toupper - this changes the string to upper case
 * @str: this is the string to change
 * Return: this is 0
 */

char *string_toupper(char *str)
{
	char *up = str;

	while (*up)
	{
		if (*up >= 'a' && *up <= 'z')
		{
			*up = *up - 'a' + 'A';
		}
		up++;
	}
	return (str);
}
