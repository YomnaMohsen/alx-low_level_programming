#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - initialize 2d array with zeros
 * @width: width of array
 * @height: height of array
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
		grid[i] = malloc(width * sizeof(int));
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
