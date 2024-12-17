#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data n of a dlistint_t linked list
 * @head: a pointer to the head of the linked list
 * Return: sum of all the data n on the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
