#include "main.h"


/**
 * _abs - this function computes the absolute value of an integer
 * @i: this is the parameter to check
 * Return: this is always 0 if true
 */

int _abs(int i)
{
	if (i < 0)
	{
		i = -(i);
	}
	else
	{
		i = i;
	}
	return (i);
}
