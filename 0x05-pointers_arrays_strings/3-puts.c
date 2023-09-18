#include "main.h"

/**
 * _puts - print given string followed by new line
 *
 * @s: pointer to string
 * Return: Nothing
 */

void  _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
