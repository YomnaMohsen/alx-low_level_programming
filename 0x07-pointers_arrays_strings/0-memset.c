#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 * @s: the address of memory to fill
 * @n: the number of bytes that mem pointed by s will be filled with
 * @b: constant byte
 * Return: pointer to filled memory.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
