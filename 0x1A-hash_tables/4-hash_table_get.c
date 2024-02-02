#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: The hash table to look into
 * @key: The key to search for
 *
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	/* calculae index */
	index = key_index((const unsigned char *)key, ht->size);

	/* Get the node at the calculated index */
	node = ht->array[index];

	while (node != NULL)
	{
		/* Compare keys */
		if (hash_strings_equal(node->key, key))
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
