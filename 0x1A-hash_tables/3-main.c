#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - test the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "dram", "ency");
	hash_table_set(ht, "vivency", "synaphea");
	hash_table_set(ht, "betty", "cool_updated");
	return (EXIT_SUCCESS);
}
