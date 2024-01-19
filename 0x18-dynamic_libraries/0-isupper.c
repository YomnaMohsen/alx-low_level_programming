#include "main.h"


/**
 *_isupper- checks whether letter is uppercase or not
 *
 * @c: ascii code  of char to be checked
 * Return: integer 0 for false , 1  for true
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
