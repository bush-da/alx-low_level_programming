#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: address of head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;

	if (head != NULL)
	{
		temp2 = *head;
		temp = temp2;
		while (temp != NULL)
		{
			temp2 = temp2->next;
			free(temp);
			temp = temp2;
		}
		*head = NULL;
	}
}
