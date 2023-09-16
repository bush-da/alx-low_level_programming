#include "search_algos.h"

/**
 * binary_search - function that searches for a value in an array of integer
 * @array: pointer to the first element of the array to search in
 * @size: the number of element in array
 * @value: value to search for
 * Return: the first index where value is located or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	left = 0;
	right = size - 1;
	while (left <= right)
	{

		printf("seaching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (array[mid]);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}
