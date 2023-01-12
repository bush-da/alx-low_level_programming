#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end
 * @head: head node
 * @n: data of the node to be added
 * Return: the address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *pointerToHead;

	pointerToHead = *head;
	newNode = malloc(sizeof(dlistint));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (pointerToHead == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	while (pointerToHead->next)
		pointerToHead = pointerToHead->next;

	pointerToHead->next = newNode;
	newNode->prev = pointerToHead;

	return (newNode);
}
