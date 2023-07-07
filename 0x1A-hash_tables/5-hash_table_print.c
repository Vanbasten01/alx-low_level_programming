#include "hash_tables.h"
/**
 *hash_table_print - a function that prints a hash table.
 *@ht: the hash table to print.
 *Return: Void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *temp;
	unsigned long int counter = 0;

	if (!ht)
		return;

	printf("{");
	for (; i < ht->size; i++)
	{

		temp = ht->array[i];
		while (temp)
		{
			if (counter)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			temp = temp->next;
			counter++;
		}
	}
	printf("}\n");
}
