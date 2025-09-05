#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: pointer to the head pointer of the list.
 *
 * Return: pointer to the new first node.
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *previous = NULL;
    listint_t *next = NULL;

    while (*head != NULL)
    {
        next = (*head)->next;
        (*head)->next = previous;
        previous = *head;
        *head = next;
    }

    *head = previous;
    return (*head);
}
