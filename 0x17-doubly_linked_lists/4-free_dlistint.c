#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *temp1;

	temp = head;
	temp1 = NULL;
	while (temp->prev)
		temp = temp->prev;
	while (head->next)
	{
		temp1 = head->next;
		free(head);
		head = temp1;
	}
}
