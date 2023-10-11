#include "function_pointers.h"

/**
 *print_name - print name
 *
 * @name: pointer to name string
 * @f: function pointer
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		exit(EXIT_FAILURE);
	(*f)(10);
}
