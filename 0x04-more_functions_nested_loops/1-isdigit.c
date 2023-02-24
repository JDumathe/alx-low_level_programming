#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c: this is the value to check
 * Return: this is 0
 */

int _isdigit(int c)
{
	if (c > 48 && c < 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
