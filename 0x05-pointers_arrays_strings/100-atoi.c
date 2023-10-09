#include <stdio.h>
#include "main.h"
/**
 * _atoi - convert string to int
 *
 * @s: pointer to string
 *
 * Return: converted int
 */

int _atoi(char *s)
{
	int sign = 1, flag = 0;
	unsigned int result = 0;

	while (*s != '\0')
	{
		if (*s == '-' && !flag)
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			flag = 1;
			result = result * 10 + (*s - '0');
		}
		if (*s < '0' || *s > '9')
		{
			if (flag)
			{
				return (result);
			}
		}
		s++;
	}
	if (!flag)
		return (0);
	return (result * sign);

}
