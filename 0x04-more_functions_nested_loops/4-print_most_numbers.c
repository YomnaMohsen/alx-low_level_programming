#include "main.h"


/**
 * print_most_numbers- uses _putchar to print digits from 0 to 9 except 2,4
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		if (i == '2' || i == '4')
			continue;
		_putchar(i);
	_putchar('\n');
}
