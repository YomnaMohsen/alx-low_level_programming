#include "main.h"


/**
 *
 * main- calling _putchar fn
 * Return: 0 and exits program
 */

int  main(void)
{
	char msg[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(msg[i]);
	_putchar('\n');
	return (0);
}
