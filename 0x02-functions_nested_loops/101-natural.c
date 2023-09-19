#include "main.h"
#include <stdio.h>


/**
 * main- print sum of multiple of 3 and 5 below 1024
 *
 * Return: 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d", i);
	printf("\n");
	return (0);
}
