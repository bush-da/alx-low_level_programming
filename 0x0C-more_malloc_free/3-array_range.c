#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min element of array
 * @max: max element of array
 * Return: pointer to newly created array
 */

int *array_range(int min, int max)
{
	int *b, i;

	i = 0;
	if (min > max)
		return (NULL);
	b = malloc(sizeof(int) * (max - min + 1));
	if (b == NULL)
		return (NULL);
	while (min <= max)
	{
		b[i] = min;
		min++;
		i++;
	}
	return (b);
}
