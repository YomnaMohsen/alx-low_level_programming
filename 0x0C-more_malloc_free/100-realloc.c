#include "main.h"
#include <stdlib.h>

/**
 *_realloc - reallocates memory block
 *@ptr : pointer to memory previously allocated
 *@old_size: is the size, in bytes, of the allocated space for ptr
 *@new_size: is the new size, in bytes of the new memory block
 *Return: pointer to newly allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int  i = 0;
	void *p;

	if (old_size == new_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	p = malloc(new_size);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < old_size && i < new_size; i++)
		*((char *)p + i) = *((char *)ptr + i);
	free(ptr);
	return (p);
}

