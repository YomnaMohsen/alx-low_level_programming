#include "main.h"
#include <stdlib.h>

/**
 * create_array - fills array with a constant char
 * @size: number of location in array to be filled
 * @c: constant char
 * Return: pointer to array.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
