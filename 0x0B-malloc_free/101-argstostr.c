#include "main.h"
#include <stdlib.h>

/**
 * argstostr - i
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
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)

	return (grid);
}
