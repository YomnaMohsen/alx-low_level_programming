#include "main.h"

/**
 * get_bit - fn that get bit at given index
 * @n: long int
 * @index: index of bit
 * Return: value of bit at index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= 64)
		return (-1);
	bit = 1 & (n >> index);
	return (bit);
}
