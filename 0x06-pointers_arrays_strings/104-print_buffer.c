#include "main.h"
#include <stdio.h>

/**
 *printline - prints line from buffer  in spec. format
 *
 *@arr: pointer array of char
 *@st: start index to print from
 *Return: Nothing
 */
void printline(char *arr, int st)
{
	int i, j;

	j = st;
	for (i = 0; i < 5 && i++)
	{
		printf("%02x%02x", arr[j], arr[j + 1]);
		j += 2;
	}
	for (i = 0; i < 10 ; i++)
	{
		if (a > 31 && a < 127)
			putchar(arr[st]);
		else
			putchar('.');
		st++;
	}
}

/**
 * print_buffer - Prints a buffer
 *
 * @b: buffer to print
 * @n: size of buffer
 * Return: nothing.
 */

void print_buffer(char *b, int n)
{
	int st, len, add = 10, j;

	if (n % 10 == 0 && n != 0)
		len = (n / 10) + 1;
	else
		len = n / 10;


	for (j = 0; j < len; j++)
	{
		printf("%08x", 10 * j);
		printf(": ");
		printline(b, 10 * j);
	}
	if (n == 0)
		printf("\n");
}

