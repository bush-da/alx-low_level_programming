#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i;

	table->size = size;

	table->array = calloc(table->size, sizeof(hash_node_t *));

	i = 0;
	while (i < table->size)
	{
		table->array[i] = NULL;
		i++;
	}


	return (table);
}
