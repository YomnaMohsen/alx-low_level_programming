#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void  _puts(char *c)
{
	return (write(1, &c, 1));
}

**
 * print_number- print int number using _putchar
 *
 * @n: number that will be printed
 * Return: Nothing
 */

void print_number(int n)
{
	unsigned int pow_r = 1, m, digit;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	m = n;
	while (m > 9)
	{
		m = m / 10;
		pow_r *= 10;
	}
	while (pow_r > 0)
	{
		digit = n / pow_r;
		_putchar(digit % 10 + '0');
		n -= digit * pow_r;
		pow_r /= 10;
	}
}

/**
 * _atoi - convert string to int
 *
 * @s: pointer to string
 *
 * Return: converted int
 */

int _atoi(char *s)
{
	int sign = 1, flag = 0;
	unsigned int result = 0;

	while (*s != '\0')
	{
		if (*s == '-' && !flag)
		{
			sign *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			flag = 1;
			result = result * 10 + (*s - '0');
		}
		else if (flag)
		{
			return (result);
		}
		s++;
	}
	return (result * sign);
}
/**
 * main -mul 2  arguments
 *@argc: number of command line arguments
 *@argv: array of pointers to strings
 * Return: 1 if fails else 0
 */

int main(int argc, char **argv)
{
	int x, y,  result = 0;

	if (argc != 3)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	result = x * y;
	printf("%d", result);
	printf("\n");
	return (0);
}
