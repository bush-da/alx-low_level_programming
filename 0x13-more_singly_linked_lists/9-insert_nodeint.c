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
	unsigned int i, check;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);

	temp->n = n;
	tra = *head;
	i = 0;
	check = 1;
	while ((i < idx - 1) && (tra != NULL))
	{
		tra = tra->next;
		i++;
		check++;
	}

	if (check != idx - 1)
		return (NULL);

	temp->next = tra->next;
	tra->next = temp;

	return (tra);
}
