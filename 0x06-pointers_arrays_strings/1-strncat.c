#include "main.h"

/**
 * _strncat - concate n chars from src to dest
 *
 *@dest: pointer to destination string
 *@src: pointer to source string
 *@n: number of chars from src that will be added to dest
 * Return: pointer to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (dest[i++] != '\0')
	{
		len++;
	}
	i = 0;

	while (src[i] != '\0' && n--)
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[i + len] = '\0';
	return (dest);
}
