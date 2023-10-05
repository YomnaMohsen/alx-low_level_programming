#include <stdio.h>
#include <stdlib.h>

/**
 * main -mul 2  arguments
 *@argc: number of command line arguments
 *@argv: array of pointers to strings
 * Return: 1 if fails else 0
 */

int main(int argc, char **argv)
{
	int x, y,  result = 0;

	if (argc < 3)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;
	printf("%d", result);
	printf("\n");
	return (0);
}
