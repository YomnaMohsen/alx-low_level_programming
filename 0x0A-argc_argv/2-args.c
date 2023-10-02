#include <stdio.h>



/**
 * main - print all  arguments
 *@argc: number of command line arguments
 *@argv: array of pointers to strings
 * Return: 0 and exits program
 */

int  main(int argc, char **argv)
{
	int count = 0;

	while (count < argc)
	{
		printf("%s", argv[count]);
		printf("\n");
		count++;
	}
	return (0);
}
