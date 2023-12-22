#include "hash_tables.h"

/**
 * hash_table_set - adds an element to hash table
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;

	if (key == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index]->key == NULL)
	{
		ht->array[index]->key = malloc(strlen(key));
		ht->array[index]->value = malloc(strlen(value));
		strcpy(ht->array[index]->key, key);
		strcpy(ht->array[index]->value, value);
		return (1);
	}
	else
	{
		hash_node_t *array = NULL, *temp = ht->array[index];
		array = malloc(sizeof(hash_node_t));
		array->key = malloc(strlen(key));
		array->value = malloc(strlen(value));
		strcpy(array->key, key);
		strcpy(array->value, value);
		array->next = temp;
		ht->array[index] = array;
		return (1);
	}
	return (0);
}
