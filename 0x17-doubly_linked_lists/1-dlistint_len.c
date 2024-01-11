#include "lists.h"
/**
 * dlistint_len - counts tge number of elements in a linked dlistint_t list.
 * @h: points to the head node.
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
