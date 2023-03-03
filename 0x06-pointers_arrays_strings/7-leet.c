#include "main.h"

/**
 * leet - this changes the leet character to the leet number
 * @str: this is the string to change
 * Return: this is 0 when true
 */

char *leet(char *str)
{
	char *le = str;
	char leet_chars[] = {'A', 'E', 'O', 'T', 'L'};
	char leet_nums[] = {'4', '3', '0', '7', '1'};
	int i;

	while (*le)
	{
		for (i = 0; i < 5; i++)
		{
			if (*le == leet_chars[i] || *le == leet_chars[i] + 32)
			{
			*le = leet_nums[i];
			}
		}
		le++;
	}
	return (str);
}
