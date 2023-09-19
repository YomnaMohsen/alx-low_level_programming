#include <stdio.h>
#include "main.h"

/**
 * print_array - print array of int
 *
 * @a: pointer to array
 * @n: number of int numbers in array
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");


	}
	printf("\n");

}
