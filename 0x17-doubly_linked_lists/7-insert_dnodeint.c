#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position idx
 * @h: pointer to the head of the list
 * @idx: index where the new node should be placed
 * @n: Data (integer) to instert in the new index
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (!temp || (!temp->next && i + 1 != idx))
		return (NULL);

	if (!temp->next)
		return (add_dnodeint_end(h, n));

	new_node  = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;
	temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}
