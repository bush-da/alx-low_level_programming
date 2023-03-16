#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head node
 * @index: nth node
 * Return: nth node of linked list or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	while (index && head != NULL)
	{
		head = head->next;
		index--;
	}
	if (!head)
		return (NULL);


	return (head);
}
