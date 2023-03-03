#include "main.h"

/**
 * cap_string - this capitalises a string
 * @str: this is the string
 * Return: this is 0 when true
 */

char *cap_string(char *str)
{
	char *up = str;
	int cap_next = 1;

	while (*up)
	{
		if (cap_next && (*up >= 'a' && *up <= 'z'))
		{
			*up -= 'a' - 'A';
			cap_next = 0;
		}
		else if (*up == ' ' || *up == '\t' || *up == '\n' ||
			*up == ',' || *up == ';' || *up == '.' ||
			*up == '!' || *up == '?' || *up == '"' ||
			*up == '(' || *up == ')' || *up == '{' || *up == '}')
		{
			cap_next = 1;
		}
		else
		{
			cap_next = 0;
		}
		up++;
	}

	return (str);
}
