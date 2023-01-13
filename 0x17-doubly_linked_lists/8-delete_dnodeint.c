#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at given index
 * @head: address of head node
 * @index: index number of the node to be delete
 * Return: 1 if it succeeded -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *pointerToHead, *check, *next;
	unsigned int count, i;

	pointerToHead = *head;
	check = pointerToHead;
	count = 0;

	if (*head == NULL)
		return (-1);
	while (check)
	{
		check = check->next;
		count++;
	}
	if (count < index)
		return (-1);
	if (index == 0)
	{
		if (pointerToHead->next == NULL && pointerToHead->prev == NULL)
		{
			free(pointerToHead);
			*head = NULL;
			return (1);
		}
		next = pointerToHead->next;
		free(pointerToHead);
		next->prev = NULL;
		*head = next;
		return (1);
	}
	i = 0;
	while (i < index - 1)
	{
		pointerToHead = pointerToHead->next;
		i++;
	}
	if (index == count)
	{
		next = pointerToHead->next;
		pointerToHead->next = NULL;
		free(next);
		return (1);
	}
	next = pointerToHead->next;
	next = next->next;
	next->prev = pointerToHead;
	pointerToHead->next = next;

	return (1);
}
