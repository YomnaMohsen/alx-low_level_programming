#include "main.h"


/**
 * print_square- print # charcter n times to form square
 *
 * @n: number of times for printing # charcter
 * Return: nothing
 */
void print_square(int n)
{
	int i, j;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('#');
		}
		 _putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
