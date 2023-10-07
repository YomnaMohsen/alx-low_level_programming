#include "main.h"
#include <stdlib.h>

/**
 * _calloc - fills array with a constant byte
 * @size: number of location in array to be filled
 * @nmemb: constant element
 * Return: void pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	p = calloc(nmemb, size);
	if (p == NULL)
	{
		return (NULL);
	}
	return (p);
}
