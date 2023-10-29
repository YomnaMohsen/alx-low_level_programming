#include <stdio.h>
/**
 *array_iterator - executes a fn given as parameter on each item in array
 * @array: array to work on
 * @size: size of array
 * @action: pointer to fn that will be executed
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
