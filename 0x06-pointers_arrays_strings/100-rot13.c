#include "main.h"

/**
 * rot13 - this changes string to rot13 code
 * @s: this is the string
 * Return: this is 0 when true
 */

char *rot13(char *s)
{
	char *p = s;
	int i;

	while (*p)
	{
		for (i = 0; i < 13; i++)
		{
			if (*p == 'A' + i || *p == 'a' + i)
			{
				*p = 'A' + (i + 13) % 26;
				break;
			}
		}
		p++;
	}

	return (s);
}
