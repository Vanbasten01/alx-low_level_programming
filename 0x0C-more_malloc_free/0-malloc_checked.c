#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - a programme that allocates memory using malloc
 *@b: the function takes an unsigned int as argument .
 *Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (!p)
		exit(98);
	return (p);
}
