#include "main.h"

/**
 * print_rev - print given string in reverse
 *
 * @s: pointer to string
 * Return: Nothing
 */

void  print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (--len >= 0)
	{
		_putchar(*(s - 1));
		s--;
	}
	_putchar('\n');
}
