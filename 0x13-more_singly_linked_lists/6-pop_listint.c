#include "lists.h"

/**
 * pop_listint - program deletes the head node of
 * a linked list
 * @head: head of a list.
 *
 * Return: head node's data.
 */

int pop_listint(listint_t **head)
{
    listint_t *temp;
    int n;

    if (head == NULL || *head == NULL)
        return (0);

    temp = *head;
    n = temp->n;
    *head = temp->next;
    free(temp);

    return (n);
}
