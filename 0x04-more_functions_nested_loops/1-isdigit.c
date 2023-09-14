#include "main.h"


/**
 *_isdigit- checks whether letter is digit from 0 to 9
 *
 * @c: ascii code  of char to be checked
 * Return: integer 0 for false , 1  for true
 */
int _isupper(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
