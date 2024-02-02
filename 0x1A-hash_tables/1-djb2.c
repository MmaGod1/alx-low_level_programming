#include "hash_tables.h"
/**
 * hash_djb2 - Hash function to implement the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	/* Initial hash value */
	hash = 5381;

	/* Iterate through each character of the string */
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
		/* hash * 33 + c */
	}

	/* Return the calculated hash value */
	return (hash);
}
