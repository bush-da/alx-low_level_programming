#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: address of head node
 * @idx: index of the list
 * @n: data to insert
 * Return: the address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *tra;
	unsigned int i;

	tra = *head;
	if (tra == NULL && idx != 0)
		return (NULL);

	i = 0;
	while (i < idx - 1 && tra != NULL)
	{
		tra = tra->next;
		i++;
	}

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
		return (tra);
	}
	temp->next = tra->next;
	tra->next = temp;

	return (tra);
}
