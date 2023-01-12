#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: address of the list to be printed
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t no;
	const dlistint_t *temp;

	no = 0;
	temp = h;
	while (temp && temp->prev)
	{
		temp = temp->prev;
	}
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		no++;
	}

	return (no);
}
