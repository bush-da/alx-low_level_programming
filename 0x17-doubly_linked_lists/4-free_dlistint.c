#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head node
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp, *checkPoint;

	if (head == NULL)
		return;
	temp = head;
	while (temp->prev)
		temp = temp->prev;
	while (temp)
	{
		checkPoint = temp->next;
		free(temp);
		temp = checkPoint;
	}
}
