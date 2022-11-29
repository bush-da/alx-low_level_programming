#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * @head: address of head
 * @index: index of node
 * Return: 1 if it succeeded -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *prev;
	listint_t *next;

	prev = *head;
	i = 0;
	if (index != 0)
	{
		while (i < index -1 && prev != NULL)
		{
			prev = prev->next;
			i++;
		}
	}

	if ((prev == NULL) || (prev->next == NULL && index != 0))
	{
		return (-1);
	}

	next = prev->next;

	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head = next;
	}

	return (1);
}
