#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to head
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while(temp != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
