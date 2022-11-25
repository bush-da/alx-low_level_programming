#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head of a node
 * @str: string to insert
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *node;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
		return (NULL);
	new->len = strlen(str);
	new->next = NULL;
	node = *head;
	if (node == NULL)
		*head = new;
	else
	{
		while (node->next != NULL)
		{
			node = node->next;
		}
		node->next = new;
	}

	return (*head);
}
