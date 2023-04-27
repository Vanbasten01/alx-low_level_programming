#include "lists.h"
/**
 *add_node -  a function that adds a new node at the beginning
 *of a list_t list.
 *@head: a pointer that pointes to a pointer pointing to head.
 *@str: a point to the first element of the string to be stored.
 *Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t i;

	if (head == NULL && str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}
