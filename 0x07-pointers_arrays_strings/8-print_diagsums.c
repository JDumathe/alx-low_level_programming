#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - this prints the sum of 2 diagonals
 * @a: this is one diagonal
 * @size: this is the size of a diagonal
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + size - i - 1);
	}

	printf("%d\n", sum1);
	printf("%d\n", sum2);
}
