#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid -  a function that returns a pointer to a 2 dimensional array
 *of integers.
 *@width: number of columns of the 2D array.
 *@height: number of rows of the 2D array.
 *Return: a pointer to a 2 dimensional array of integers otherwise NULL.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **P;


	P = malloc(height * sizeof(int *));
	if (P == NULL)
	{
		free(P);
		return (NULL);
	}
	if (height <= 0 || width <= 0)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		P[i] = malloc(width * sizeof(int));
		if (P[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(P[i]);
			free(P);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			P[i][j] = 0;

	return (P);
}
