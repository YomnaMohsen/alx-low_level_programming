#include "main.h"
#include <stdio.h>

/**
 * _memcpy -  copies n bytes from memory area src to memory area dest
 * @dest: pointer to destination mem
 * @n: the number of bytes that will be copied from src to dest memory
 * @src: pointer to source mem
 * Return: pointer to dest memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i]  = src[i];
		i++;
	}

	return (src);
}
