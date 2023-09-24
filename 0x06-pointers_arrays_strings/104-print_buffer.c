#include "main.h"
#include <stdio.h>

/**
 *printline - prints line from buffer  in spec. format
 *
 *@arr: pointer array of char
 *@st: start index to print from
 *@end: number of char that will be printed
 *Return: Nothing
 */
void printline(char *arr, int st, int end)
{
	int i = 0;

	while (i < 10)
	{
		if (i < end)
			printf("%02x", arr[st + i]);
		else
			printf("  ");
		if (i % 2)
			putchar(' ');
		i++;
	}
	i = 0;
	while (i < end)
	{
		if (arr[st + i]  > 31 && arr[st + i] < 127)
			putchar(arr[st + i]);
		else
			putchar('.');
		i++;
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
	int st, end;

	if (n > 0)
	{
		for (st = 0; st <= (n - 1) / 10 ; st++)
		{
			printf("%08x", 10 * st);
			printf(": ");
			if (n - (st * 10) < 10)
				end = n - (st * 10);
			else
				end = 10;
			printline(b, st * 10, end);
			putchar('\n');
		}
	}
	else
		printf("\n");
}

