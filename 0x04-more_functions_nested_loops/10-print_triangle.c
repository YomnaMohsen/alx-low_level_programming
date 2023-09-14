#include "main.h"


/**
 * print_triangle- print # charcter n times to form square
 *
 * @n: number of times for printing # charcter
 * Return: nothing
 */
void print_triangle(int n)
{
	int i, j, k;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n - j - 1; i++)
		{
			_putchar(' ');
		}
		for (k = 0; k <= j; k++)
		{
			_putchar('#');
		}

		 _putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
