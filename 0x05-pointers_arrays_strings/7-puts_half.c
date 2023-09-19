#include "main.h"

/**
 * puts_half - print 2nd half of string
 *
 * @s: pointer to string
 * Return: Nothing
 */

void  puts_half(char *s)
{
	int i, len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	if (len % 2 == 0)
	{
		for (i = len / 2; i < len; i++)
			_putchar(s[i]);
	}
	else
	{
		for (i = len - ((len - 1) / 2); i < len ; i++)
			_putchar(s[i]);

	}
	_putchar('\n');
}
