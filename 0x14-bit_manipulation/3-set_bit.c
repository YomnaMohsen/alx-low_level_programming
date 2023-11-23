#include "main.h"

/**
 * set_bit - fn that sets bit to 1 at given index
 * @n: pointer to long int
 * @index: index of bit
 * Return: 1 if worked else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
