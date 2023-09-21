#include "main.h"

/**
 *cap_string - convert lower case to upper
 *
 *@a: pointer array of char
 * Return: pointer to string
 */

char *cap_string(char *a)
{
	int i = 1, flag = 0, j;
	char s[] = ",;.!\"\n\t?(){} ";

	if (a[0] >= 'a' && a[0] <= 'z')
		a[0] -= 32;
	while (a[i] != '\0')
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (a[i] == s[j])
			{
				flag = 1;
				break;
			}
		}
		if (flag)
		{
			if (a[i + 1] >= 'a' && a[i + 1] <= 'z')
			{
				a[i + 1] -= 32;
				flag = 0;
				i++;
				continue;
			}
			flag = 0;
		}
		i++;
	}
	return (a);
}

