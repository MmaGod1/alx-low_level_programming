#include "lists.h"

/**
 * add_node_end - adds a new node at the end.of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *traverse;
	size_t len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	traverse = *head;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (traverse->next != NULL)
			traverse = traverse->next;
		traverse->next = new;
	}

	return (*head);
}
