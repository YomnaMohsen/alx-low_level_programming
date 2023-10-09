#include "main.h"
#include <stdlib.h>

/**
 * array_range - fills allocatedarray with certain range of numbers
 * @min: start of range
 * @max: end of rrange
 * Return: pointer. to allocated array
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * ((max - min) + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++; min++)
	{
		*(p + i) = min;
	}
	return (p);
}
