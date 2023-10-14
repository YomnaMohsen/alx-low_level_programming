#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints argument based on its format
* @format: string format
* Return: Nothing
*/

void print_all(const char *const format, ...)
{
	va_list ap;
	int found = 0, len = 0,  i = 0;
	char *s1;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		len++;
		i++;
	}
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case ('i'):
				printf("%d", va_arg(ap, int));
				found = 1;
				break;
			case ('f'):
				printf("%f", va_arg(ap, double));
				found = 1;
				break;
			case ('c'):
				printf("%c", va_arg(ap, int));
				found = 1;
				break;
			case ('s'):
				s1 = va_arg(ap, char *);
					if (s1 == NULL)
						s1 = "(nill)";
				printf("%s", s1);
				found = 1;
				break;
			default:
				found = 0;
		}
		if (found && i < len - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ap);
}
