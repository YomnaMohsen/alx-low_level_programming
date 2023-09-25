#include "main.h"
#include <stdio.h>

/**
 * _strchr -  locates 1st occuerence of charcter in string
 * @c: charcter to search for
 * @s: pointer to source mem
 * Return: pointer to string
 */
char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
		return (NULL);
}
