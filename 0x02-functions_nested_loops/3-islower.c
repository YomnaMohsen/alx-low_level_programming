#include "main.h"


/**
 *_islower- checks whether leter is in lowercase or not
 *
 * @c: ascii code  of char to be checked
 * Return: integer 0 for false , 1  for true
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
