#include "search_algos.h"

/**
 * print_array - print the array
 * @array: array to print
 * @first: the first index to start with
 * @last: the last index of the array
 * Return: void
 */

static void print_array(int *array, int first, int last)
{
	printf("Searching in array: ");
	while (first <= last)
	{
		printf("%d", array[first]);
		if (first < last)
			printf(", ");
		first++;
	}
	printf("\n");
}

/**
 * binary_search - search for value in sorted array using binary search
 * @array: pointer to the first element in array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index of the value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int first, mid, last;

	if (array == NULL)
		return (-1);

	first = 0;
	last = size - 1;
	while (first <= last)
	{
		print_array(array, first, last);
		mid = first + (last - first) / 2;
		if (value == array[mid])
			return (mid);
		if (array[mid] > value)
			last = mid - 1;
		else
			first = mid + 1;

	}
	return (-1);
}
