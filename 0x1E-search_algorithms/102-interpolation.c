#include "search_algos.h"

/**
 * interpolation_search - search value using interpolation search algo
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index of where value found or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	int prob, low, high;

	if (array == NULL)
		return (-1);

	low = 0;
	high = (int)(size - 1);

	while (low <= high)
	{
		prob = low + ((value - array[low]) *
			      (high - low)) / (array[high] - array[low]);
		if (prob < (int)size)
			printf("Value checked array[%d] = array[%d]\n", prob, array[prob]);
		else
		{
			printf("Value checked array[%d] is out of range\n", prob);
			break;
		}
		if (value == array[prob])
			return (prob);
		else if (value > array[prob])
			low = prob + 1;
		else
			high = prob - 1;
	}

	return (-1);
}
