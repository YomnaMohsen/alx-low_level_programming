#include "main.h"

/**
 * _strlen - print length of string
 *
 * @s: pointer to string
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
