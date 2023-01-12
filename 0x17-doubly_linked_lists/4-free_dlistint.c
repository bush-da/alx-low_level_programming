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
	while (temp->next)
	{
		temp1 = temp->next;
		free(temp);
		temp = temp1;
	}
}
