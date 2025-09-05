#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe - frees a listint_t list safely.
 * @h: pointer to pointer to the head of the list.
 *
 * Return: number of nodes freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = NULL, *next_node = NULL;
	const listint_t **visited;
	size_t count = 0, i;

	if (h == NULL || *h == NULL)
		return (0);

	visited = malloc(sizeof(listint_t *) * 1024);
	if (visited == NULL)
		exit(98);

	current = *h;

	while (current != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (current == visited[i])
			{
				/* Loop detected, stop safely */
				free(visited);
				*h = NULL;
				return (count);
			}
		}

		/* Save current node address */
		visited[count] = current;
		free(current);
		count++;
		current = next_node;
	}

	free(visited);
	*h = NULL;
	return (count);
}
