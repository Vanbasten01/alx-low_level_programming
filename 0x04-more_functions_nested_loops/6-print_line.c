#include "main.h"
/**
 *print_line - Entry point
 *@n: it takes n as input
 *Return: Always 0
 */
void print_line(int n)
{
	int x;

	for (x = 1; x <= n; x++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}


