#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: address of head node
 * @n: data to insert at the end
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	temp = *head;
	if (*head == NULL)
	{
		*head = node;
		return (*head);
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = node;

	return (*head);
}
