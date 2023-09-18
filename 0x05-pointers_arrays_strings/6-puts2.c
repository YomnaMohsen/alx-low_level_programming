#include "main.h"

/**
 * puts2 - print every other char of string
 *
 * @s: pointer to string
 * Return: Nothing
 */

void  puts2(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(s[i]);
	}
	_putchar('\n');
}
