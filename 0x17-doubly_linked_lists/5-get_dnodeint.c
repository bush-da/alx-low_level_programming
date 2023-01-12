#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of linked list
 * @head: address of head node
 * @index: nth node
 * Return: nth node, if the node does not exist returns NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	i = 0;

	while (i < index && head)
	{
		head = head->next;
		i++;
	}

	return (head);
}
