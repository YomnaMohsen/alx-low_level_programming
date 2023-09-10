#include <stdio.h>

/**
 * main - display combination of 3 digits in asecending order using putchar
 * Return: 0 and exit the program.
 */
int main(void)
{
	int b, c, d, e;

	for (b = 0; b <= 9; b++)
	{
		for (c = 0; c <= 9; c++)
		{
			for (d = 0; d <= 9; d++)
			{
				for (e = 0; e <= 9; e++)
				{
					if (b * 10 + c >= d * 10 + e)
						continue;
					putchar(b + '0');
					putchar(c + '0');
					putchar(' ');
					putchar(d + '0');
					putchar(e + '0');
					if (b * 10 + c == 98 && d * 10 + e == 99)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
