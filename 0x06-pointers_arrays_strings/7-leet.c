#include "main.h"

/**
 *leet - encode string
 *
 *@a: pointer array of char
 * Return: pointer to string
 */

char *leet(char *a)
{
	int i = 0, j;
	char s[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L', '\0'};
	char num[] = {4, 3, 0, 7, 1};


	while (a[i] != '\0')
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (a[i] == s[j] || a[i] == s[j] + 32)
			{
				a[i] = num[j] + '0';
				break;
			}
		}
		i++;
	}
	return (a);
}

