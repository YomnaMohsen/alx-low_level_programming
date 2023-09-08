#include <stdio.h>

/**
 * main - display lower case alphabet
 * Return: 0 and exit the program.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c == 'e' || c == 'q')
			continue;
		else
			putchar(c);
	putchar('\n');
	return (0);
}
