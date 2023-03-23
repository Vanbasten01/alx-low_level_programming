#include "main.h"
/**
 *print_diagonal - Entry point
 *@n: input as integer
 *Return: Always 0
 */
void print_diagonal(int n)
{
	int x, y;

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (x = 1; x <= n; x++)
	{
		for (y = 1; y <= x; y++)
		{
			if (y == 1)
				continue;
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
