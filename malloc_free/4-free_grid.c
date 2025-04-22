#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - this function frees memory on a grid
 * @grid: the array to free
 * @height: the index of an array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
