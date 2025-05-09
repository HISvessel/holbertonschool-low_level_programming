#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - this function creates a 2d array
 * @width: the amount of horizontally placed elements
 * @height: the amount of vertically palced elements
 * Return: int, else 0
 */

int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);

	if (!grid)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (!grid[i])
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
