#include "main.h"
#include <stdlib.h>

/**
 * free_grid - this function frees the 2d grid that was created
 * @grid: this is the grid to free
 * @height: this is the height of the grid
 * Return: this is 0 when true
 */

void free_grid(int **grid __attribute__((unused)), int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(k[i]);
	}
	free(k);
}
