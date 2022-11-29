#include "lists.h"

/**
 * print_listint - prints all the elements of a lintint_t list
 * @h: pointer to head
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count;

	count = 0;
	if (h == NULL)
		return (NULL);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
