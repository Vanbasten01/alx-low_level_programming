#include "main.h"
#include <stdlib.h>
/**
 *create_array -  a function that creates an array of chars,
 *and initializes it with a specific char.
 *@size: the size of the array we are creating
 *@c: the char we are intializing the array with
 *Return: a point to the array otherwise NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		*(p + i) = c;
	}
	return (p);
	free(p);
}
