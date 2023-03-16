#include "lists.h"

/**
 * dlistint_len - function that returns the number of node in list
 * @h: head node
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t numNode = 0;

	while (h)
	{
		numNode++;
		h = h->next;
	}

	return (numNode);
}
