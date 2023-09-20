#include "main.h"

/**
 *cap_string - convert lower case to upper
 *
 *@a: pointer array of char
 * Return: pointer to string
 */

char *cap_string(char *a)
{
	int i = 1;

	while (a[i] != '\0')
	{
		if (a[i] < 'A' || a[i] > 'Z')
		{
			if (a[i] < 'a' || a[i] > 'z')
			{
				i++;
				continue;
			}
			else
			{
				if (a[i - 1] > 'A' ||  a[i - 1] < 'Z')
				{
					if (a[i - 1] > '0' || a[i - 1] < '9')
						a[i] -= 32;
					else
					{
						i++;
						continue;
					}

				}
			}
			i++;
		}
	}
	return (a);
}

