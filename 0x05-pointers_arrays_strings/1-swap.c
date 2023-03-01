#include "main.h"

/**
 * swap_int - this swaps the values of integers
 * @a: value to be swaped
 * @b: value of the pointer
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
