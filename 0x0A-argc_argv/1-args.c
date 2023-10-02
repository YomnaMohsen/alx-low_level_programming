#include <stdio.h>



/**
 * main - display number of arguments
 *@argc: number of command line arguments
 *@argv: array of pointers to strings
 * Return: 0 and exits program
 */

int  main(int argc, char **argv __attribute__((unused)))
{
	int count = 0;

	while (count < argc)
	{
		count++;
	}

	printf("%d", count - 1);
	printf("\n");
	return (0);
}
