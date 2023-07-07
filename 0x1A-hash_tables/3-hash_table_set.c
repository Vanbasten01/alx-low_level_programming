#include "hash_tables.h"
/**
 *hash_table_set - a function that adds an element to
 *the hash table.
 *@ht: a pointer to the hash table.
 *@key: the key of the element.
 *@value:  the value of the element.
 *Return: 1 if it succeeded otherwise 0.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *newslot = NULL;
	hash_node_t *temp;

	if (!ht || !key)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (!temp->value)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
		newslot = malloc(sizeof(hash_node_t *));
		if (!newslot)
			return (0);

		newslot->key = strdup(key);
		newslot->value = strdup(value);
		if (!newslot->value)
			return (0);
		newslot->next = ht->array[idx];
		ht->array[idx] = newslot;
		return (1);
}
