#include "main.h"

/**
 *leet - encode string
 *
 *@a: pointer array of char
 *Return: pointer to string
 */

char *leet(char *a)
{
	int i = 0, j;
	char s[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	int num[] = {4, 3, 0, 7, 1};


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

