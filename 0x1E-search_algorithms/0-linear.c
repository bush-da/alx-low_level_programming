#include "search_algos.h"
/**
 * linear_search - searches for a value in an array using linear search
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1 not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t count;

	count = 0;
	while (count < size)
	{
		printf("Value checked array[%ld] = [%d]\n", count, array[count]);
		if (array[count] == value)
			return (count);
		count++;
	}
	return (-1);
}
