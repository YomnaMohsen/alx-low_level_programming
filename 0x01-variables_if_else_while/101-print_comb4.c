#include <stdio.h>

/**
 * main - display combination of 3 digits in asecending order using putchar
 * Return: 0 and exit the program.
 */
int main(void)
{
	int c, d, e;

	for (c = '0'; c <= '9'; c++)
	{
		for (d = c + 1; d <= '9'; d++)
		{
			for (e = d + 1; e <= '9'; e++)
			{
				putchar(c);
				putchar(d);
				putchar(e);
				if (c == '7')
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
