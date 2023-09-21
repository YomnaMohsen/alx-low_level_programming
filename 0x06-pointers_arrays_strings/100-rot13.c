#include "main.h"

/**
 *rot13 - encode string
 *
 *@a: pointer array of char
 *Return: pointer to string
 */

char *rot13(char *a)
{
	int i = 0, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char alpha1[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKL";


	while (a[i] != '\0')
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (a[i] == alpha[j])
			{
				a[i] = alpha1[j];
				break;
			}
		}
		i++;
	}
	return (a);
}

