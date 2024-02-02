#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to delete
 *
 * Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current, *next;

	if (ht == NULL)
		return;

	/* Free memory for each node in the hash table */
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}

	/* Free the array of hash_node_t pointers */
	free(ht->array);

	/* Free the hash table structure itself */
	free(ht);
}

