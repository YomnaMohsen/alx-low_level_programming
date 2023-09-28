#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - finds string length using recursion
 * @s: string to print
 * Return: int length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(++s));
}
