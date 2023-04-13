#include "main.h"
#include <stdlib.h>
/**
 *_calloc - a function that allocates memory for an array, using malloc.
 *@nmemb: number of the elements.
 *@size:number of bytes in each element.
 *Return: a pointer to the memory allocated otherWise NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *P;
	unsigned int i;




	if (nmemb == 0 || size == 0)
		return (NULL);

	P = malloc(nmemb * size);
	if (P == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	{
		P[i] = 0;
	}
	return (P);
}
