#include "main.h"

/**
 * print_binary - fn that converts unsigned int to binary string
 * @n: long int
 * Return: Nothing
 */
void print_binary(unsigned long int n)
{
	int count = 0;
	unsigned long int tmp;

	tmp = n;
	if(tmp == 0 || tmp == 1)
	{
	       _putchar(tmp + '0');
	       return;
	}	       
	while (tmp > 1)
	{
		tmp = tmp >> 1;
		count++;
	}
	while (tmp != n)
	{
		tmp = n >> count;
		_putchar((tmp & 1) + '0');
		count--;
	}
}
