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

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
