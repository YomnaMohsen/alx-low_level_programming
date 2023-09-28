#include "main.h"
#include <stdio.h>

/**
 * factorial - find factroial of number
 * @n: int number
 * Return: int number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
