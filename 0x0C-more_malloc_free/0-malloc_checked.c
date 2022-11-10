#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - alocates memory using malloc
 * @b: size of byte
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	x = malloc(b);
	if (x == NULL)
	{
		exit(98);
	}
	return (x);
}
