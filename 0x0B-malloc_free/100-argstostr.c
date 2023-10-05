#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates args of program
 * @ac: number of args
 * @av: array of strings
 * Return: pointer newstring
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = ac, index = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
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
