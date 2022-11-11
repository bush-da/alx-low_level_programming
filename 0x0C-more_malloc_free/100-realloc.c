#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @p: pointer to old memory
 * @old_size: the size of old allocated memory
 * @new_size: the new size
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptrN;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptrN = malloc(new_size);
	memcpy(ptrN, ptr, sizeof(int));
	return (ptrN);
}

