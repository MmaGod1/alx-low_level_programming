 #include "lists.h"
/**
 * add_dnodeint - adds node at the begining of a list.
 * @head: pointer to the head of node.
 * @n: int data
 * Return: pointer to the head of node in the list.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (*head);
}
