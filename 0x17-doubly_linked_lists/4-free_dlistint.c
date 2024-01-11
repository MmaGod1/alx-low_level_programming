#include "list"
/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointer to head of the node.
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
