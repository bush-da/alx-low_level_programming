#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head node
 * @index: nth node
 * Return: nth node of linked list or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count;

	temp = head;
	count = 0;

	while (count < index && temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	if (!temp)
		return (NULL);


	return (temp);
}
