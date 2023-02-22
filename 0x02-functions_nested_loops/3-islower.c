#include "main.h"

/**
 * _islower - this checks if the value is lower
 *@c: parameter to be printed
 * Return: this is always 0 if true
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
