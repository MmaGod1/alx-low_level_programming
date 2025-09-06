#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the list
 * @idx: index where the new node should be added (starting at 0)
 * @n: data for the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	/* If inserting at the beginning, reuse add_dnodeint */
	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

	if (current == NULL)
		return (NULL);

	/* If inserting at the end, reuse add_dnodeint_end */
	if (current->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	new_node->prev = current;
	current->next->prev = new_node;
	current->next = new_node;

	return (new_node);
}
