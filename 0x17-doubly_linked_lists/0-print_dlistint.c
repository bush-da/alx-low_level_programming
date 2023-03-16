#include "lists.h"

/**
 * print_dlistint - function that prints all the elements list
 * @h: head node
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t numNode = 0;

	while (h)
	{
		numNode++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (numNode);
}
