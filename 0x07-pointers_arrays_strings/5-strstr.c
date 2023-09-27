#include "main.h"
#include <stdio.h>

/**
* compare - compare 2 strings
*@a: first string
*@b: second string
*Return: int
*/

int compare(char *a, char *b)
{
	while (*a && *b)
	{
		if (*a == *b)
		{
			a++;
			b++;
		}
		else
			return (0);
	}
	return (1);
}

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
		if (*haystack == *needle && compare(haystack, needle))
			return (haystack);

		haystack++;
	}

	return (NULL);
}
