#include "main.h"

/**
 * flip_bits - fn that flip bits to get number from another
 * @n: long int
 * @m: long int we want to convert to
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor, bits = 0;

	xor = n ^ m;
	while(xor)
	{
		xor = xor & (xor - 1);
		bits++;
	}
	return (bits);
}
