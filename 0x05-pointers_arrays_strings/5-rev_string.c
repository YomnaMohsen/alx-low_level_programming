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

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	len--;

	while (len >  i)
	{
		tmp = s[len];
		s[len] = s[i];
		s[i] = tmp;
		len--;
		i++;
	}
}
