#include "hash_tables.h"

/**
 * hash_table_print - print hash table with key and value pair
 * @ht: hash table
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	int flagForComma;
	unsigned long int i;

	flagForComma = 0;


	if (ht == NULL)
		return;


	i = 0;
	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (flagForComma == 1)
				printf(", ");
			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			flagForComma = 1;
		}
		i++;
	}
	printf("}\n");
}
