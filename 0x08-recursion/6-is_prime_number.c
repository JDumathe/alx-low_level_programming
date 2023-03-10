#include "main.h"

/**
 * is_prime_number - this checks if an integer is a prime number
 * @n: this is the integer
 * Return: this is 0 when true
 */

int is_prime_number(int n)
{
	if (n % 2 == 0 || n % 5 == 0 || (n % 3 == 0 && n != 3))
	{
		return (0);
	}
	else if (n <= 1)
	{
		return (0);
	}
	is_prime_number(n / n);
	return (1);
}
