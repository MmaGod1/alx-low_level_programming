#include "hash_tables.h"

/**
 * key_index - Calculates the index of a key in a hash table array
 * @key: The key to calculate the index for
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	/* Calculate hash value using hash_djb2 function */
	hash_value = hash_djb2(key);

	/* Modulo operation to get the index within the array size */
	return (hash_value % size);
}
