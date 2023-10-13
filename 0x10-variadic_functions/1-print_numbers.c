#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - prints number followed by new line
* @separator: string printed bet numbers
* @n: number of ints passed to fn
* Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if (separator == NULL || i == n - 1)
			printf("%d", va_arg(ap, int));
		else
			printf("%d%s", va_arg(ap, int), separator);
	}
	printf("\n");
	va_end(ap);
}
