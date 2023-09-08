#include <stdio.h>

/**
 * main - display digits using putchar
 * Return: 0 and exit the program.
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
