#include <stdio.h>
/**
 * int_index - executes a fn given as parameter on each item in array
 * @array: array to work on
 * @size: size of array
 * @cmp: pointer to fn that will cmp passed int with numbers in array
 * Return: index of found number otherwise return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
