#include "lists.h"

/**
 * get_nodeint_at_index - traverse and return nth node
 * @head: head node
 * @index: nth node
 * Return: the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	x = 0;
	while (x < index && head != NULL)
	{
		head = head->next;
		x++;
	}

	return (head);
}
