#include "main.h"
#include <stddef.h>

/**
 * _strstr - this is a function that locates a substring.
 * @haystack: this is the string to check
 * @needle: this is the string to search
 * Return: this is 0 when true
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
			haystack++;
	}
	return (NULL);
}

