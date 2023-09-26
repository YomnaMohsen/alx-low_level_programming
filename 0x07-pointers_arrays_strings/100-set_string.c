#include "main.h"
#include <stdio.h>

/**
 * set_string - set a value of pointer to char
 * @s: pointer to pointer to char
 * @to: pointer to char
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
