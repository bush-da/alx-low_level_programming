#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: starting number
 * @max: ending number
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *a, i;

	if (min > max)
		return (NULL);
	a = malloc((max + 1) * sizeof(int));
	if (a == NULL)
		return (NULL);
	while (i <= max)
	{
		a[i] = i;
		i++;
	}
	return (a);
}
