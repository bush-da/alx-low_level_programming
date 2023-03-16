#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of node
 * Return: no return
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;

	temp = head;

	while (temp != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
