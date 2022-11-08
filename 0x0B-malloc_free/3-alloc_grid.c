#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * @width: width of array
 * @height: height of array
 * Return: returns a pointer
 */

int **alloc_grid(int width, int height)
{
	int **a, w, h, i;

	a = (int**)malloc(sizeof(int*) * height);
	for (i = 0; i < height; i++)
		a[i] = (int*)malloc(width * sizeof(int));
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

	
