#include "main.h"
#include <stdlib.h>

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

/**
 * _strdup - copies string
 * @str: string to be copied
 * Return: pointer to newly allocated string.
 */
char *_strdup(char *str)
{
	char *p;
	int i = 0;
	int len;

	len = _strlen(str);

	p = malloc(sizeof(char) * (len + 1));
	if (str == NULL || p == NULL)
	{
		return (NULL);
	}

	while (i < len)
	{
		p[i] = *str;
		i++;
		str++;
	}
	p[i] = '\0';
	return (p);
}
