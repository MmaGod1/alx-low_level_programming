#include "lists.h"
/**
 * sum_dlistint - sums all the data (n) of a dlistint_t linked list.
 * @head: pointer to the head of the nodes.
 * Return: sum of all dsta n.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);)
}

