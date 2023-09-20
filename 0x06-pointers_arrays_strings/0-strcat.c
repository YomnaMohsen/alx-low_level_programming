#include "main.h"

/**
 * _strcat - concate 2 strings
 *
 *@dest: pointer to destination string
 *@src: pointer to source string
 * Return: pointer to dest string
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (dest[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;

	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
	}
	dest[i + len] = '\0';
	return (dest);
}
