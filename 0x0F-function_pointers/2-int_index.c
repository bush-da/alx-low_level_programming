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
	int i;

	i = 0;
	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
