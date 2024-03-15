#include "search_algos.h"

/**
 * jump_search - searches for value using jump search algo
 * @array: pointer to first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index of value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump_size, pt1, pt2, i;

	if (array == NULL)
		return (-1);

	jump_size = sqrt(size);
	pt1 = 0;
	pt2 = jump_size;
	i = 0;

	while (i < size && pt1 <= (size - 1))
	{

		printf("Value checked array[%ld] = [%d]\n", pt1, array[pt1]);
		if (value == array[pt1])
		{
			return (pt1);
		}
		else
		{
			if (value > array[pt1] && value <= array[pt2])
			{
				printf("Value found between indexes [%ld] and [%ld]\n", pt1, pt2);
				while (pt1 <= pt2)
				{
					printf("Value checked array[%ld] = [%d]\n", pt1, array[pt1]);
					if (value == array[pt1])
						return (pt1);
					pt1++;
				}
			}
		}
		pt1 += jump_size;
		pt2 += jump_size;
		i++;
	}
	return (-1);
}
