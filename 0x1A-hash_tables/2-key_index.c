#include "hash_tables.h"
/**
 *key_index - a function that gives you the index of a key.
 *@key: the key associated with a specific slot
 *or bucket in a hash table.
 *@size: the hash table size.
 *Return: the index.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int k_index;

	k_index = hash_djb2(key) % size;
	return (k_index);
}
