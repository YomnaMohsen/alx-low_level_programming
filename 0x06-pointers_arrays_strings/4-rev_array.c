#include "main.h"

/**
 *reverse_array - reverse array of int
 *
 *@a: pointer array of int
 *@n: number of array items
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, tmp;

	n--;

	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = tmp;
		i++;
		n--;
	}
}

