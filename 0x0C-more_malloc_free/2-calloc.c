#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: an array
 * @size: size of an array
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	return (a);
}
