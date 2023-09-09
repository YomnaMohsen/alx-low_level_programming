#include <stdio.h>

/**
 * main - display hex  digits using putchar
 * Return: 0 and exit the program.
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
