#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list.
 * @h l: points to the head of a list
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
