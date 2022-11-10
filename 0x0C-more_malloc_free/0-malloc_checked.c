#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - alocates memory using malloc
 * @b: size of byte
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *x;

	x = malloc(b);
	if (x == NULL)
	{
		return ((void *)98);
	}
	return (x);
}
