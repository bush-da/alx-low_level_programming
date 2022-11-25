#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of the node
 * @str: str to be add to beginning
 * Return: the address of the new element, of NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
		return (NULL);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
