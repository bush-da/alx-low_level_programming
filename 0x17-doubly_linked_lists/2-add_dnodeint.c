#include "lists.h"

/**
 * add_dnodeint - add node at the beginning of a list
 * @head: head node
 * @n: value to be inserted
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *pointerToHead;

	pointerToHead = *head;
	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (pointerToHead == NULL)
	{
		*head = newNode;
		return (*head);
	}
	while (pointerToHead->prev)
		pointerToHead = pointerToHead->prev;

	pointerToHead->prev = newNode;
	newNode->next = pointerToHead;
	*head = newNode;

	return (*head);
}
