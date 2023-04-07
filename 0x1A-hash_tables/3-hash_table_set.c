#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @key: key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	char *value_type;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);


	index = key_index((const unsigned char *)key, ht->size);
	value_type = strdup(value);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_type;
			return (1);
		}
	}



       	item = malloc(sizeof(hash_node_t));
       	if (item == NULL)
	{
		free(value_type);
       		return (0);
	}
       	item->key = strdup(key);
       	item->value = value_type;
	item->next = ht->array[index];
       	ht->array[index] = item;
       	return (1);


}
