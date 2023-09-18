#include "main.h"

/**
 * swap_int - swap value of 2 int
 *
 * @a: pointer to value of first int
 * @b: pointer to value of second int
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
