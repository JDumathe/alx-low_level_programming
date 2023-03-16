#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - this function returns a pointer to a 2d array of integers
 * @width: this is the width of the grid
 * @height: this is the height of the grid
 * Return: this is 0 when true
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **k;

	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}
	/*l = width + height;*/
	k = malloc(sizeof(int *) * height);

	if (k == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		k[i] = malloc(sizeof(int) * width);
		if (k[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			k[i][j] = 0;
		}
	}
	return (k);
}
