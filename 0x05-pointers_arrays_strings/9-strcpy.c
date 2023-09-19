#include "main.h"

/**
 * _strcpy - reverse array of charcters (string)
 *
 *@dest: pointer to destination string
 *@src: pointer to source string
 * Return: Nothing
 */

char * _strcpy(char *dest, char *src )
{
	int len = 0, i = 0;
	char tmp;

	while (src[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	len++;

	while (i != len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
