#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: the first char in array
 * Return: pointer to first address of array or 0 if it fail
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	a = malloc(size);
	if (a = NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
