#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - prints a linked list (handles loops safely).
 * @head: pointer to the head of the list.
 *
 * Return: number of nodes printed.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *current = head;
    const listint_t **visited;
    size_t count = 0, i;

    visited = malloc(sizeof(listint_t *) * 1024);
    if (visited == NULL)
        exit(98);

    while (current != NULL)
    {
        for (i = 0; i < count; i++)
        {
            if (current == visited[i])
            {
                printf("-> [%p] %d\n", (void *)current, current->n);
                free(visited);
                return (count);
            }
        }

        printf("[%p] %d\n", (void *)current, current->n);

        visited[count] = current;
        count++;
        current = current->next;
    }

    free(visited);
    return (count);
}
