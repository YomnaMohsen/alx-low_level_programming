#include <stdio.h>
#include "main.h"


/**
 * print_number- print int number using _putchar
 *
 * @n: number that will be printed
 * Return: Nothing
 */

void print_number(int n)
{
	int pow_r = 1, m, digit;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	m = n;
	while (m > 9)
	{
		m = m / 10;
		pow_r *= 10;
	}
	while (pow_r > 0)
	{
		digit = n / pow_r;
		_putchar(digit % 10 + '0');
		n -= digit * pow_r;
		pow_r /= 10;
	}
}

