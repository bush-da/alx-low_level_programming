#include "lists.h"

/**
 * sum_listint - sum all data of linked list
 * @head: pointer to head node
 * Return: the sum of all the data
 */

int sum_listint(listint_t *head)
{
	unsigned int sum;

	sum = 0;
	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
