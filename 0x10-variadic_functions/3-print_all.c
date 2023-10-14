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
	int i = 0;
	char *s1;
	char *separator = "";


	va_start(ap, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%s%d", separator, va_arg(ap, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(ap, double));
				break;
			case 'c':
				printf("%s%c", separator, va_arg(ap, int));
				break;
			case 's':
				s1 = va_arg(ap, char *);
					if (s1 == NULL)
						s1 = "(nill)";
				printf("%s%s", separator, s1);
				break;
		}
		i++;
		separator = ", ";
	}
	printf("\n");
	va_end(ap);
}
