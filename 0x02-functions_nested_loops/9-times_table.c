#include "main.h"


/**
 * times_table- prints 9 timestable
 *
 * Return: nothing
 */

void times_table(void)
{
	int i, j, m;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			m = i * j;
			if (m > 9)
				_putchar(m / 10 + '0');
			_putchar(m % 10 + '0');
			if (i == 9)
			{
				_putchar('\n');
				break;
			}
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	}
}
