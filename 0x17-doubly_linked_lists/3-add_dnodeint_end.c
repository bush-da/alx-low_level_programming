#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: head node
 * @n: data to be inserted on new node
 * Return: the address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode;
	dlistint_t *temp;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	temp = *head;

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		newNode->prev = NULL;
		return (newNode);
	}

	while (temp->next != NULL)
		temp = temp->next;

	newNode->prev = temp;
	temp->next = newNode;

	return (newNode);
}
