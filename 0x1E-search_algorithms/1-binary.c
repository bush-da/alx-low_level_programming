#include "search_algos.h"

/**
 * binary_search - searches for a value using binary search algo
 * @array: pointer to the first element of the array to search in
 * @size: the number of element in array
 * @value: value to search for
 * Return: the index of where value if found else -1
 */

int binary_search(int *array, size_t size, int value)
{
	int start = 0;
	int end = size - 1;
	int i;
	int mid;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(", ");
		}
		printf("\n");
		mid = (start + end) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			end = mid - 1;
		else
			start = mid + 1;
	}
	return (-1);
}
