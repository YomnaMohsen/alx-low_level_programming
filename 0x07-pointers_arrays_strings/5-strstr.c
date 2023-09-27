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
	

	while (*haystack != '\0')
	{
		char *t = haystack;
		char *t1 = needle;
		while (*haystack == *t1 && *haystack != '\0' &&  *t1 != '\0')
		{
			haystack++;
			t1++;
		}
		if (*t1 == '\0')
			return (t);

		haystack = t + 1;
	}

	return (NULL);
}
