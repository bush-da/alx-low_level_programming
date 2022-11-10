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

	if (min > max)
		return (NULL);
	i = 0;
	b = malloc(sizeof(int) * (max + 1));
	if (a == NULL)
		return (NULL);
	while (i <= max)
	{
		b[i] = i;
		i++;
	}
	return (b);
}
