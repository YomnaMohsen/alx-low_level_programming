#include "main.h"


/**
 * print_line- uses _putchar to print _ n times  to form line
 *
 * @n: the number of times _ charcter will be printed
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
