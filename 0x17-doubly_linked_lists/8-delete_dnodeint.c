#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: double pointer to the head of the list
 * @index: index of the node to be deleted (starting at 0)
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	if (current == NULL)
		return (-1);

	temp = current->prev;
	temp->next = current->next;
	if (current->next != NULL)
		current->next->prev = temp;

	free(current);
	return (1);

}
