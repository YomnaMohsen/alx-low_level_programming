#include "main.h"


/**
 * print_alphabet- uses _putchar to print lowercase alpha
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
