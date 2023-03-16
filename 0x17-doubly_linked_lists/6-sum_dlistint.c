#include "lists.h"

/**
 * sum_dlistint - function that sum all the data of linked list
 * @head: head node
 * Return: sum of all data or 0 if its empty
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

	return sum;
}
