#include "main.h"
#include <stdio.h>
/**
 *print_times_table - it prints the n times table, starting with 0.
 *@n: integer as input
 *Return:Always 0
 */
void print_times_table(int n)
{
	int a;
	int b;
	int res;

	if (n >= 0 && n <= 15)
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');
				res = a * b;

				if (res < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				}
				else if (res >= 10 && res < 100)
				{
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				else
				{
					_putchar((res / 100) + '0');
					_putchar(((res / 10) % 10) + '0');
					_putchar((res % 10) + '0');
				}
			}
			_putchar('\n');
		}
}

