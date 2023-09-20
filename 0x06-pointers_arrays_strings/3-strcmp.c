#include "main.h"

/**
 * _strcmp - compare 2 strings
 *
 *@s2: pointer to destination string
 *@s1: pointer to source string
 * Return: int indicates equality or less than or greater
 */

int *_strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0')
	{
		if (s1[i++] != s2[i++])
			break;
	}
	return (*(const unsigned char *) s1 - *(const unsigned char *) s2);
}
