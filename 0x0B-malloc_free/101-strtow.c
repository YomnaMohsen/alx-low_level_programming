#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - split string into words
 * @str: pointer to string
 * Return: array of strings
 */
char **strtow(char *str)
{
	int i = 0, j, len = ac, index = 0;
	char *p;

	if (str == "" || str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] == " ")
			continue;
		else
		{
			index++;
	}
	p = malloc(sizeof(char) * len + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[index++] = av[i][j];
		}
		p[index++] = '\n';
	}
	p[len] = '\0';
	return (p);
}
