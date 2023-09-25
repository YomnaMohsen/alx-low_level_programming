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
	int i, j = 0, count = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
			{
				j++;
				count++;
			}
			else
				break;
		}
		if (needle[j] == '\0')
		{
			return (haystack[(i - count) + 1]);
		}
	}
	return (NULL);
}
