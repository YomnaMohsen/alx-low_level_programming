#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concate 2 strings
 *
 *@s1: pointer to first string
 *@s2: pointer to second string
 *Return: pointer to newly allocated memory
 */

char *str_concat(char *s1, char *s2)
{
	int len = 0, len1 = 0, i = 0;
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

	p = malloc(sizeof(char) * (len + len1 + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		p[i] = s1[i];
	for (i = 0; i < len1; i++)
		p[i + len] = s2[i];
	p[i + len] = '\0';
	return (p);
}
