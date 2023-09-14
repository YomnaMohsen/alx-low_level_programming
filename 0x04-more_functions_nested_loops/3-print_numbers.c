#include "main.h"


/**
 * print_numbers- uses _putchar to print digits fro 0 to 9
 *
 * Return: nothing
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
