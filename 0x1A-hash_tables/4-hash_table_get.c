#include "hash_tables.h"
/**
 *hash_table_get - a function that retrieves a value
 * associated with a key.
 *@ht: the hash table.
 *@key: the key we are retrieving its value.
 *Return: the value associated to the key otherwise NULL.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *temp;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];
	if (temp == NULL)
		return (NULL);

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

