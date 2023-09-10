#include <stdio.h>

/**
 * main - display combination of two  digits in asecending order  using putchar
 * Return: 0 and exit the program.
 */
int main(void)
{
	int c, d;

	for (c = '0'; c <= '9'; c++)
	{
		for (d = c + 1; d <= '9'; d++)
		{
			putchar(c);
			putchar(d);
			if (c == '8')
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
