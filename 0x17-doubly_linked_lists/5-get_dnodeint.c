#include "lists.h"
/**
 * get_dnodeint_at_index - get a node at a particular index.
 * @head: pointer to the head of the node
 * @index: position of the desired nide.
 * Return: the desired node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
		return (NULL);

	while (head && count != index)
	{
		head = head->next;
		count++;
	}

	return (head);
}
