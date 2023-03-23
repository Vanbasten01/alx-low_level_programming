#include "main.h"
/**
 *print_square - Entry point
 *@size: integer as input
 *Return: Always 0
 */
void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (a = 1; a <= size; a++)
	{
		for (b = 1; b <= size; b++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}

