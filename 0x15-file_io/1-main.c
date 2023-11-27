#include <stdlib.h>
#include <stdio.h>
#include "main.h"

int main(int ac, char ** av)
{
	int n;
	
	if (ac != 3)
	{
		printf("error");
		return (0);
	}
		n = create_file(av[1],av[2]);
		printf("%i", n);

	return (0);
}
