#include "main.h"

/**
 * rev_string - reverse array of charcters (string)
 *
 * @s: pointer to string
 * Return: Nothing
 */

void  rev_string(char *s)
{
	int len = 0, i = 0;
	char tmp;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;

	while (len - 1 != i)
	{
		tmp = s[len - 1];
		s[len - 1] = s[i];
		s[i] = tmp;
		len--;
		i++;
	}
}
