#include "main.h"
#include <stdlib.h>
/**
 *free_grid -  a function that frees a 2 dimensional grid previously
 *created by your alloc_grid function.
 *@grid: a pointer to a pointer to the memory allocated.
 *@height: number of rows .
 *Return: void.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
