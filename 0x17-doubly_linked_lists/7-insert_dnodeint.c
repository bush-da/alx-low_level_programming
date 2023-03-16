#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: address of head node
 * @idx: index number to be inserted
 * @n: data to be inserted
 * Return: the address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *prev, *newNode;
	unsigned int count;

	count = 0;

	if (idx == 0 || *h == NULL)
		return (add_dnodeint(h, n));

	temp = *h;
	while (count < idx && temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (count < idx)
		return (NULL);

	if (!temp)
		return (add_dnodeint_end(h, n));

	newNode = malloc(sizeof(dlistint_t));
	prev = temp->prev;
	newNode->next = temp;
	temp->prev = newNode;
	newNode->prev = prev;
	prev->next = newNode;
	newNode->n = n;

	return (newNode);
}
