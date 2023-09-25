#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @accept: This is the string containing the list of characters to match in s
 * @s: the main string to be scanned
 * Return: the length of initial segment which contains char in substring
 */
int *_strspn(char *s, char *accept)
{
	int len = 0;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				len++;
				break;
			}
			accept++;
		}
		if (*accept == '\0')
		{
			return (len);
		}
		s++;
	}
	return (len);
}
