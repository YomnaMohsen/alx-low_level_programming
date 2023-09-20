#include "main.h"

/**
 * _strncpy - copies n chars from src to dest
 *
 *@dest: pointer to destination string
 *@src: pointer to source string
 *@n: number of chars from src that will be copied to dest
 * Return: pointer to dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (dest == NULL || src == NULL || n == 0)
		return (dest);
	while (src[i] != '\0' && n--)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
