#include "hash_tables.h"
/**
 *shash_table_create - a function that creates a sorted hash table.
 *@size: the size of ht.
 *Return: a pointer to the ht otherwise NULL.
 *
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	sht = malloc(sizeof(shash_table_t));
	if (!sht)
		return (NULL);

	sht->size = size;
	sht->array = malloc(sizeof(shash_node_t *) * size);
	if (!sht->array)
	{
		free(sht);
		return (NULL);
	}
	sht->shead = NULL;
	sht->stail = NULL;

	for (i = 0; i < size; i++)
		sht->array[i] = NULL;

	return (sht);
}
/**
 *
 *
 *
 *
 */
shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *shn;

	/* Allocate memory for the new hash node */
	shn = malloc(sizeof(shash_node_t));
	if (shn == NULL)
		return (NULL);

	/* Duplicate and store the key */
	shn->key = strdup(key);
	if (shn->key == NULL)
	{
		free(shn);
		return (NULL);
	}

	/* Duplicate and store the value */
	shn->value = strdup(value);
	if (shn->value == NULL)
	{
		free(shn->key);
		free(shn);
		return (NULL);
	}

	shn->next = shn->snext = shn->sprev = NULL;
	return (shn);
}
/**
 *
 *
 *
 *
 */
void add_to_sorted_list(shash_table_t *htable, shash_node_t *node)
{
	shash_node_t *tmp;

	if (!htable->shead && !htable->stail)
	{
		htable->shead = htable->stail = node;
		return;
	}

	tmp = htable->shead;
	while (tmp)
	{
		if (strcmp(node->key, tmp->key) < 0)
		{
			node->snext = tmp;
			node->sprev = tmp->sprev;
			tmp->sprev = node;
			if (node->sprev)
				node->sprev->snext = node;
			else
				htable->shead = node;
			return;
		}
		tmp = tmp->snext;
	}
	node->sprev = htable->stail;
	htable->stail->snext = node;
	htable->stail = node;
}

			

/**
 *
 *
 *
 *
 *
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	char *new_value;
	shash_node_t *temp;
	shash_node_t *new_node;

	/*if (!ht || !key)
		return (0);*/
	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_value = strdup(value);
			if (!new_value)
				return (0);
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}
	new_node = make_shash_node(key, value);
	/*
	new_node = malloc(sizeof(shash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}
	new_node->snext = new_node->sprev = NULL;*/
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	add_to_sorted_list(ht, new_node);
	return (1);
}

/**
 *
 *
 *
 *
 *
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *tmp;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	if (tmp)
		return (NULL);
	
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
/**
 *
 *
 *
 *
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;
	int counter = 0;

	if (!ht)
		return;

	tmp = ht->shead;

	printf("{");
	while (tmp)
	{
		if (counter != 0)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		counter++;
		tmp = tmp->snext;
	}
	printf("}\n");
}
/**
 *
 *
 *
 *
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	int counter = 0;
	shash_node_t *tmp;

	if (!ht)
		return;

	tmp = ht->stail;
	
	printf("{");
	while (tmp)
	{
		if (counter != 0)
			printf(", ");
		printf("'%s': '%s'", tmp->key, tmp->value);
		counter++;
		tmp = tmp->sprev;
	}
	printf("}\n");
}
/**
 *
 *
 *
 *
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *curr;
	shash_node_t *prev;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;

	for (i = 0; i < ht->size; i++)
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
