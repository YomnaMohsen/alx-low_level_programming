#include <stdio.h>


/**
 * main- largest prime factor
 *
 * Return: int 0
 */
int main(void)
{
	int i = 2;
	unsigned long n = 612852475143;

	while (n != 1)
		if (n % j == 0)
			n = n  / j;
		else
			j++;

	printf("%d\n", j);
	return (0);
}
