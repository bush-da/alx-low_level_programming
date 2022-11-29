#include "lists.h"

/**
 * pop_listint - delets the head node of listint_t
 * @head: address of head node
 * Return: the value of head node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *temp2;
	int x;

	if (*head == NULL)
		return (0);
	temp2 = *head;
	temp = temp2->next;
	x = temp2->n;
	free(temp2);
	*head = temp;

	return (x);
}
