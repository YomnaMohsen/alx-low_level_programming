#include "main.h"
#include <stdio.h>

/**
 * is_palin - find if string is palindreom or not
 * @s: pointer to string
 * @n: int start index
 * @e: int last index
 * Return: return int number
 */
int is_palin(char *s, int n, int e)
{
	if (n >= e)
		return (1);
	if (s[n] == s[e])
		return (is_palin(s, n + 1, e - 1));
	return (0);
}



/**
 * _strlen - find length of string
 * @s: pointer to string
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + (_strlen(s)));
	}
	return  (0);

}

/**
 * is_palindrome - checks if string is palindrome or not
 * @s: pointer to string
 * Return: return 1 if string is palindrome else return 0
 */
int is_palindrome(char *s)
{
	int e = _strlen(s) - 1;

	if (_strlen(s) < 2)
		return (1);


	return (is_palin(s, 0, e));
}
