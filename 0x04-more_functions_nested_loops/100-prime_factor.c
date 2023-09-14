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
		if (n % i == 0)
			n = n  / i;
		else
			i++;

	printf("%d\n", i);
	return (0);
}
