#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: address of array
 * @size: size of array
 * cmp: compare function that compare value
 * Return: the index of array that matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, x;

	i = 0;
	if (size <= 0)
		return (-1);
	if (array && size && cmp)
	{
		while (i < size)
		{
			x = cmp(array[i]);
			if (x != 0)
				return (i);
			i++;
		}
	}
	if (i == size)
		return (-1);
	return (i);
}
