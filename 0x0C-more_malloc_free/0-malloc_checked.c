#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - this function allocates memory
 * @b: this is the size
 * Return: this is 0 when true
 */

void *malloc_checked(unsigned int b)
{
	void *i = malloc(/*sizeof(unsigned int) * */b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
