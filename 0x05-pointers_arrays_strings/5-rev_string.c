#include "main.h"
#include <string.h>

/**
 * rev_string - this function reverses the string
 * @s: this is the string to be reversed
 */

void rev_string(char *s)
{
	int i;
	int j = 0;
	char rev = s[0];

	while (s[j] != '\0')
	j++;
	for (i = 0; i < j; i++)
	{
		j--;
		rev = s[j];
		s[j] = s[i];
		s[i] = rev;

	}
}
