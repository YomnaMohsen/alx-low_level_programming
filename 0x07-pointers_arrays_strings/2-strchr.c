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
	int found = 0;

	while (*s != '\0')
	{
		if (*s == c)
		{
			found = 1;
			break;
		}
		s++;
	}
	if (found)
	{
		return (s);
	}
	else
		return (NULL);
}
