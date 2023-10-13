#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - prints strings followed by new line
* @separator: string printed bet strings
* @n: number ofstrings passed to fn
* Return: Nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *sepstr;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sepstr = va_arg(ap, char *);
		if (sepstr == NULL)
			printf("(nil)");
		else if (separator == NULL || i == n - 1)
			printf("%s", sepstr);
		else
			printf("%s%s", sepstr, separator);
	}
	printf("\n");
	va_end(ap);
}
