#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * @width: width of array
 * @height: height of array
 * Return: returns a pointer
 */

int **alloc_grid(int width, int height)
{
	int **a, w, h, i;

	if (width == 0 || height == 0)
		return (0);
	a = malloc(sizeof(int *) * height);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		a[i] = malloc(width * sizeof(int));
	if (a == NULL)
		return (NULL);
	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			a[h][w] = 0;
			w++;
		}
		h++;
	}
	return (a);
}
