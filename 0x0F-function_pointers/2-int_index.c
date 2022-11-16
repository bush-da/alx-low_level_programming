#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: address of array
 * @size: size of array
 * cmp: compare function that compare value
 * Return: -1 if didn't match if return not equal
 * to 0 match found and return index number
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array && cmp)
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
