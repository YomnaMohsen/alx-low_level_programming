#include "main.h"

/**
 * _puts - print every other char of string
 *
 * @s: pointer to string
 * Return: Nothing
 */

void  _puts2(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s += 2;
	}
	_putchar('\n');
}
