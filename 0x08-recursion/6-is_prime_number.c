#include "main.h"
#include <stdio.h>

/**
 * find_prime -  checks numbers that x are divisble by
 * @x: int number to be checked
 * @n: int number that x will be divided by
 * Return: 1 if number is prime, 0 otherwise
 */
int find_prime(int x, int n)
{
	if (n == x / 2)
	{
		return (1);
	}
	if (x % n == 0)
		return (0);
	return  (find_prime(x, n + 1));

}

/**
 * is_prime_number - checks if int number is prime or not
 * @x: int number
 * Return: return 1 if number is prime else return 0
 */
int is_prime_number(int x)
{
	int div = 2;

	if (x <= 1)
	{
		return (0);
	}
	if (x == 2 || x == 3)
	{
		return (1);
	}

	return (find_prime(x, div));
}
