#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates args of program
 * @ac: number of args
 * @av: array of strings
 * Return: pointer newstring
 */
char *argstostr(int ac, char **av);
{
	int i, j, len = 0, index = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
	}
	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[index++] = av[i][j];
		}
		p[index++] = '\n';
	}
	p[len] = '\0';
	return (p);
}
