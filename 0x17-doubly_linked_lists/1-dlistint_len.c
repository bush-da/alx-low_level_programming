#include "lists.h"

/**
 * dlistint_len - count number of elements in a linked list
 * @h: address of list
 * Return: number of elements in a list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count;

	count = 0;
	while (temp && temp->prev)
		temp = temp-prev;
	while (temp)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}
