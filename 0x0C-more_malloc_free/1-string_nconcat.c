#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concate 2 strings
 *@n : number of chars to concate
 *@s1: pointer to first string
 *@s2: pointer to second string
 *Return: pointer to newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = 0, len1 = 0, i = 0;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i++] != '\0')
	{
		len++;
	}
	i = 0;

	while (s2[i++] != '\0')
	{
		len1++;
	}

	p = malloc(sizeof(char) * (len + n + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = s1[i];
	for (i = 0; i < n; i++)
		p[i + len] = s2[i];
	p[i + len] = '\0';
	return (p);
}
