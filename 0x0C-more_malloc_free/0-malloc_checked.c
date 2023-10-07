#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @size: number of location in memory to be allocated
 * Return: void pointer.
 */
void *malloc_checked(unsigned int size)
{
	void *p;

	p = malloc(size);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
