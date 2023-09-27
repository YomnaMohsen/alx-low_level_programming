#include "main.h"
#include <stdio.h>


/**
 * _strstr - finds the first occurrence of the substring  in  main string
 * @haystack: string to search in
 * @needle: substring that needs to be located
 * Return: pointer to the located  substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *t;
	while (*haystack != '\0')
	{
		t = haystack;
		while (*haystack == *needle && *haystack != '\0'&&  *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if(*needle == '\0')
			return (t);

		haystack = t + 1;
	}

	return (NULL);
}
