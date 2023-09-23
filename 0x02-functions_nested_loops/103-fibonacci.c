#include "main.h"
#include <stdio.h>


/**
 * main- print um of even valued number in fibonacci series
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0;
	int  tmp1 = 1, tmp2 = 1, series;

	while (series < 4000000)
	{
		series = tmp1 + tmp2;
		tmp1 = tmp2;
		tmp2 = series;
		if (tmp2 % 2 == 0)
		{
			sum += tmp2;
		}
	}
	printf("%d\n", sum);
	return (0);
}
