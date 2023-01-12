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
	dlistint_t *pointerToHead, *checker, *newNode;
	int count, i;

	pointerToHead = *h;
	checker = *h;

	count = 0;
	while (checker->prev)
		checker = checker->prev;
	while (checker)
	{
		checker = checker->next;
		count++;
	}
	if (count > idx)
		return (NULL);

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	i = 0;
	if (idx == 0)
	{
		newNode->next = *h;
		newNode->prev = NULL;
		*h = newNode;
		return (newNode);
	}
	while (i < idx - 2)
	{
		pointerToHead = pointerToHead->next;
		i++;
	}
	newNode->n = n;
	newNode->next = pointerToHead->next;
	newNode->prev = pointerToHead;
	pointerToHead->next = newNode;
	checker = newNode->next;
	checker->prev = newNode;

	return (newNode);
}
