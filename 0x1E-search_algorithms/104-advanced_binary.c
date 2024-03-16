#include "search_algos.h"

/**
 * binary - use advance binary search algo
 * @array: first pointer to the array of elements
 * @high: higher index to search for
 * @low: lower index to search for
 * @value: value to search for
 * Return: index value or -1
 */

int binary(int *array, size_t high, size_t low, int value)
{
	size_t mid, i;

	if (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		mid = low + (high - low) / 2;

		if (array[mid] == value && (mid == low || array[mid - 1] != value))
			return (mid);

		else if (array[mid] >= value)
			return (binary(array, mid, low, value));
		else
			return (binary(array, high, mid + 1, value));
	}
	return (-1);
}


/**
 * advanced_binary - search value using advanced binary search algo
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index where value is located or -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low, high;

	if (array == NULL)
		return (-1);
	low = 0;
	high = size - 1;
	return (binary(array, high, low, value));
}

