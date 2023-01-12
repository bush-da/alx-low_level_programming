#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: address of the list to be printed
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t no;

	no = 1;
	while (h && h->prev)
	{
		h = h->prev;
	}
	while (h)
	{
		print("%d\n", h->n);
		h = h->next;
		no++;
	}

	return (no);
}
