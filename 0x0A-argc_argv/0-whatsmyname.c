#include <stdio.h>



/**
 * main - display program name
 *@argc: number of command line arguments
 *@argv: array of pointers to strings
 * Return: 0 and exits program
 */

int  main(int argc __attribute__((unused)), char **argv)
{
	printf("%s", argv[0]);
	printf("\n");
	return (0);
}
