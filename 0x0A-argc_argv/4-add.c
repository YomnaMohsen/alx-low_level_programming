#include <stdio.h>
#include <stdlib.h>

/**
 * main -add poistive numbers  arguments
 *@argc: number of command line arguments
 *@argv: array of pointers to strings
 *Return: 1 if fails else 0
 */

int main(int argc, char *argv[])
{
	int x, y, result = 0;

	if (argc == 1)
	{
		printf("0");
		printf("\n");
	}
	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		 result += atoi(argv[x]);
	}
	printf("%d", result);
	printf("\n");
	return (0);
}
