#include "main.h"
#include <stdio.h>

/**
*find_prime: helps to check whether number passed to is_prime_number
*@x: int number to be checked
*@n: int number that x will be divided by
*Return: 1 if number is prime, 0 otherwise
*/
int find_prime(int x, int n)
{
	if (x == n)
	{
		return (1);
	}
	if (x % n == 0)
		return (0);
	find_prime(x, n + 1);

}

/**
 * is_prime_number - checks if int number is prime or not
 * @x: int number
 * Return: return 1 if number is prime else return 0
 */
int is_prime_number(int x)
{
	if (x == 1)
	{
		return (1);
	}

	return (find_prime(x, 2));
}
