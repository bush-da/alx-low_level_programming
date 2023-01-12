#include "lists.h"

/**
 * sum_dlistint - add all the data of linked list
 * @head: address of head node
 * Return: sum of all data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
