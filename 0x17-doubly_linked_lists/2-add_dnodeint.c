#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * @head: address of head node
 * @n: data to be inserted in new node
 * Return: the address of the new element of NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return NULL;

	newNode->prev = NULL;
	newNode->n = n;

	if (*head == NULL)
	{
		*head = newNode;
		newNode->next = *head;
		return newNode;
	}

	newNode->next = *head;
	(*head)->prev = newNode;
	*head = newNode;

	return (newNode);
}
