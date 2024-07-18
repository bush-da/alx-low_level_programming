#include "search_algos.h"

/**
 * interpolation_search - searchs for value in a sorted array
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: the first index where value is located of -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t high, low, pos;

	if (array == NULL || size == 0)
		return (-1);

	high = size - 1;
	low = 0;

	while (high >= low)
	{
		pos = low + (((double)(high - low) /
			      (array[high] - array[low])) * (value - array[low]));
		if (pos < size)
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", pos);
			break;
		}
		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}

	return (-1);
}
