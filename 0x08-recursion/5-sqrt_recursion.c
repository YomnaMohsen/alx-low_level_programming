#include "main.h"
#include <stdio.h>

/**
 * find_sq - helper fn to find square root of number
 * @x: int number to be checked
 * @n: root that will be checked against x
 * Return: sq root of number or -1
 */
int find_sq(int x, int n)
{
	if (x == n * n)
	{
		return (n);
	}
	if (n * n > x)
		return (-1);
	return  (find_sq(x, n + 1));

}

/**
 * _sqrt_recursion - find square root of number
 * @x: int number
 * Return: return square root of number or -1
 */
int _sqrt_recursion(int x)
{
	int sroot = 2;

	if (x < 0)
	{
		return (-1);
	}
	if (x == 1)
	{
		return (1);
	}

	return (find_sq(x, sroot));
}
