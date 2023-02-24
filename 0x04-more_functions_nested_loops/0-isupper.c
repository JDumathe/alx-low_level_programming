#include "main.h"

/**
 * _isupper - this checks if it is uppercase
 * @c: this is the letter to be checked
 * Return: this is 0
 */

int _isupper(int c)
{
	if (c > 65 && c < 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
