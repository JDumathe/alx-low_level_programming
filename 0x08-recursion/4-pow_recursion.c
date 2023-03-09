#include "main.h"

/**
 * _pow_recursion - this return the value of x raised to the power of y
 * @x: this is the base value
 * @y: this is the exponent
 * Return: this is 0 when true
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
