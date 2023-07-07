#include "hash_tables.h"
/**
 *hash_table_delete - a function that deletes a hash table.
 *@ht: the hash table to delete.
 *Return: void.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *curr;
	hash_node_t *prev;


	for (; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr)
		{
			prev = curr;
			curr = curr->next;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
	}
	free(ht->array);
	free(ht);
}
