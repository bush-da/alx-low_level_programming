#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head node
 * @idx: index number
 * @n: value to insert in to the new node
 * Return: the address of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *pointerToHead, *nextNode, *check;
	unsigned int count, i;

	count = 0;
	pointerToHead = *h;
	check = pointerToHead;

	while (check)
	{
		check = check->next;
		count++;
	}

	if (count < idx)
		return (NULL);

	if (idx == 0)
	{
		newNode = add_dnodeint(h, n);
		return (newNode);
	}
	if (idx == count)
	{
		newNode = add_dnodeint_end(h, n);
		return (newNode);
	}
	newNode = malloc(sizeof(dlistint_t));
	newNode->n = n;
	i = 0;
	while (i < idx - 1)
	{
		pointerToHead = pointerToHead->next;
		i++;
	}

	nextNode = pointerToHead->next;
	newNode->next = nextNode;
	newNode->prev = pointerToHead;
	pointerToHead->next = newNode;
	nextNode->prev = newNode;

	return (newNode);
}
