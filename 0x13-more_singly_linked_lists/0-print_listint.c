#include "lists.h"
/**
 *print_listint - it prints all the elements of a listint_t list.
 *@h:a listint_t pointer to the head node.
 *Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *new_node = h;
	size_t count = 0;

	while (new_node)
	{
		printf("%d\n", new_node->n);
		count++;
		new_node = new_node->next;
	}
	return (count);
}
