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
 * binary_search2 - search for value in sorted array using binary search
 * @array: pointer to the first element in array
 * @left: start of the array index
 * @right: end of the array index
 * @value: the value to search for
 * Return: the first index of the value or -1
 */

int binary_search2(int *array, size_t left, size_t right, int value)
{
	int mid;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;
		if (value == array[mid])
			return (mid);
		if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;

	}
	return (-1);
}


/**
 * exponential_search - search for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value located or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t expon, start;

	if (array == NULL || size == 0)
		return (-1);
	expon = 1;
	if (array[0] == value)
		return (0);

	while (expon <= size)
	{
		if (array[expon] > value)
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
			       expon / 2, expon - 1);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", expon, array[expon]);
		expon *= 2;
	}
	expon = expon >= size ? size - 1 : expon;
	start = expon / 2;
	return (binary_search2(array, start, expon, value));
}
