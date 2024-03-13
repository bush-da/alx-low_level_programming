#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using linear search algo
 * @array: an array of integers
 * @size: the size of array
 * @value: a value to search for
 * Return: first index where value is found or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t count = 0;

	if (array == NULL)
		return (-1);

	while (count < size)
	{
		printf("Value checked array[%ld] = [%d]\n", count, array[count]);
		if (array[count] == value)
			return (count);
		count++;
	}
	return (-1);
}
