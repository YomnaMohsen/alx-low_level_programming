#include "main.h"
#include <stdio.h>


/**
 * main- print fibonacci series
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long tmp1 = 1, tmp2 = 1, series = 0;

	printf("%d, ", 1);
	for (i = 1; i < 50; i++)
	{
		series = tmp1 + tmp2;
		if (i < 49)
		{
			printf("%lu, ", series);
		}
		else
		{
			printf("%lu", series);
		}
		tmp1 = tmp2;
		tmp2 = series;
	}
	printf("\n");
	return (0);
}
