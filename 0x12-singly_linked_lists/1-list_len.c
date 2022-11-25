#include "lists.h"

/**
 * list_len - return the number of elemets in a linked list_t list
 * @h: first node
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num;

	num = 0;
	if (h == NULL)
		return (num);
	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
