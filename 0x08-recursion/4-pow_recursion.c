#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - the value of x raised to the power of y
 * @x: int number
 * @y: int number
 * Return: If y is lower than 0, the function should return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * (power(x, y - 1)));
}
