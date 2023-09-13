#include "main.h"


/**
 *print_last_digit- print last digit of number
 *
 * @n: integer number that its last digit will be printed
 * Return: last digit of parameter n
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	else
	{
		n = (n % 10) * -1;
		_putchar(n + '0');
		return (n);
	}
}
