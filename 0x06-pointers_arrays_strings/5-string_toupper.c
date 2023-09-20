#include "main.h"

/**
 *string_toupper - convert lower case to upper
 *
 *@a: pointer array of char
 * Return: Nothing
 */

char *string_toupper(char *a)
{
	int i = 0;

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
				a[i] -= 32;
			}	}
		i++;
	}
	return (a);
}

