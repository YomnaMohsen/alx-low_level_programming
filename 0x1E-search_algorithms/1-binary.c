#include "search_algos.h"
/**
* binary_search -  searches for a value in an array of integers
* using the binary search algorithm
* assume array is sorted and no repeated values
* @array: pointer to the first element of the array to search in
* @size: size of array
* @value: value to search for
* Return: index of searched value
*/

int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1, mid;

	if (!array)
	{
		return (-1);
	}
	while (l <= r)
	{
		print_arr(array, l, r);
		mid = (l + r) / 2;
		if (array[mid] < value)
		{
			l = mid + 1;
		}
		else if (array[mid] > value)
		{
			r = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
/**
 *print_arr - print array
 *@array: pointer to array
 *@start: start index of array
 *@end: end of index of array
 *Return: Nothing
*/
void print_arr(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i != end)
		{
			printf("%d, ", array[i]);
		}
		else
		{
			printf("%d", array[i]);
		}
	}
	printf("\n");
}
