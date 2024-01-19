#include "main.h"


/**
 *_abs- display absolute of number
 *
 * @n: integer number that its abs. value displayed
 * Return: absolute valur of parameter n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
