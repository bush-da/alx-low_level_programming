#include "search_algos.h"
#include <math.h>

/**
 * jump_search - jump search algo implementation
 * @array: pointer to the first element to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index of value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	int jump, left, max, jumpP;

	if (array == NULL)
		return (-1);

	jumpP = sqrt(size);
	jump = sqrt(size);
	max = (int) size;
	left = 0;

	while (left < max && array[left] <= value)
	{
		printf("Value checked array[%d] = [%d]\n", left, array[left]);

		if (array[jump] >= value || jump >= max)
		{
			printf("Value found between indexes [%d] and [%d]\n", left, jump);
			break;
		}
		left = jump;
		jump += jumpP;


	}
	while (left < max)
	{
		printf("Value checked array[%d] = [%d]\n", left, array[left]);
		if (value == array[left])
			return (left);
		left++;
	}
	return (-1);
}
