#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integer
 * @array: pointer to the first element of the array to search in
 * @size: the number of element in array
 * @value: value to search for
 * Return: the first index where value is located or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
