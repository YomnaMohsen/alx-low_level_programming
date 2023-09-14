#include "main.h"


/**
 * print_diagonal- print \" \\" charcter n times to form diagonal
 *
 * @n: number of times for printing \ charcter
 * Return: nothing
 */
void print_diagonal(int n)
{
	int i, j;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i <= j; i++)
		{
			_putchar(' ');
		}
		 _putchar('\\');
		 _putchar('\n');
	}
	_putchar('\\');
}
