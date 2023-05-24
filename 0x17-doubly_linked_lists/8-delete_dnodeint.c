#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at given index
 * @head: head node
 * @index: index to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;

	temp = *head;

	if (*head == NULL)
		return (-1);

	while (index)
	{
		if (!temp)
			return (-1);
		temp = temp->next;
		index--;
	}

	if (*head == temp)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->next;
	}

	free(temp);
	return (1);
}
