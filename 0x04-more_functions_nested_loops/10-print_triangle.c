#include "main.h"
/**
 *print_triangle - Entry point
 *@size: integer as input
 *Return: Always 0
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (i = 1; i <= size; i++)/*row*/
	{
		for (j = i; j < size; j++) /*space*/
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++) /*columns*/
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

