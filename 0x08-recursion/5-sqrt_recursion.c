#include "main.h"

/**
 * _sqrt_recursion - this returns the natural square root of a number
 * @n: this is the value
 * Return: this is 0 when true
 */

int _sqrt_recursion(int n)
{
	int root;

	if (n == 0 || n == 1)
	{
		return (n);
	}
	root = _sqrt_recursion(n - 1);

	if (root * root == n)
	{
		return (root);
	}
	else if (root * root > n)
	{
		return (-1);
	}
	else
	{
		return (root + 1);
	}
}
