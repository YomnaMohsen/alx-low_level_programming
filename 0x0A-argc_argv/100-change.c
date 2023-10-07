#include <stdio.h>
#include <stdlib.h>

/**
 * main -find min coin change of args
 *@argc: number of command line arguments
 *@argv: array of pointers to strings
 *Return: 1 if fails else 0
 */

int main(int argc, char *argv[])
{
	int x, money, change = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	while (money > 1)
	{
		for (x = 0; x < 5; x++)
		{
			if (money >= coins[x])
			{
				change += money / coins[x];
				money = money % coins[x];
			}
		}
	}
	if (money == 1)
	{
		change++;
	}
	printf("%d\n", change);
	return (0);
}
