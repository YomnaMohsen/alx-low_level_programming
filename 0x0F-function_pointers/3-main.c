#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - prints result of selected operation
*@argc: number of passed args
*@argv: pointer to array of args
*Return: Always 0
*/

int main(int argc, char *argv[])
{
	int n1, n2;
	char *s;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	s = argv[2];
	if (get_op_func(s) == NULL || s[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((s[0] == '/' || s[0] == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(s)(n1, n2));
	return (0);

}
