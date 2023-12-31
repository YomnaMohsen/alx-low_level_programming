#include "main.h"

/**
 * _strcmp - compare 2 strings
 *
 *@s2: pointer to destination string
 *@s1: pointer to source string
 * Return: int indicates equality or less than or greater
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
			break;
		i++;
	}
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		else
			return (s1[i] - s2[i]);
}

