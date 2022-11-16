#include "function_pointers.h"

/**
 * array_iterator - executes a funtion given as a parameter
 * @array: array to iterate
 * @size: size of array
 * @action: function that executes
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	i = 0;
	if (array && size)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
