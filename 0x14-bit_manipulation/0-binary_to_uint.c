#include "main.h"

/**
 * binary_to_uint - fn that converts binary string to unsigned int
 * @b: binary string
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b == '1')
			val = (val << 1) | 1;
		else if (*b == '0')
			val = val << 1;
		else
			return (0);
		b++;
	}
	return (val);
}
