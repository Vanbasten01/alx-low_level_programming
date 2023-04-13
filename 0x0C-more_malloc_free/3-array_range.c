#include "main.h"
#include <stdlib.h>
/**
 *array_range -  a function that creates an array of integers.
 *@min:the first element of the array and the smalest one.
 *@max:the last element of the array and the largest one .
 *Return: a pointer to the newly created array otherwise NULL.
 *
 */
int *array_range(int min, int max)
{
	int *p;
	int i, n;

	if (min > max)
		return (NULL);

	n = (max - min + 1);
	p = malloc(sizeof(*p) * n);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
	free(p);
}

