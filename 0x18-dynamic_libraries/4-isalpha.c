#include "main.h"


/**
 *_isalpha- checks whether parameter is alpha or other char
 *
 * @c: ascii code  of char to be checked
 * Return: integer 0 if parameter is not alphabet , 1 if letter
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
