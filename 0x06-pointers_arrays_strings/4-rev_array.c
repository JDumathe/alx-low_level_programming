#include "main.h"

/**
 * reverse_array - this function prints a string in reverse
 * @a: this is the string to print
 * @n: the number of bytes
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		int rev = a[i];
		a[i] = a[j];
		a[j] = rev;
	}
	return;
}
