#include "main.h"
/**
 *print_number - Entry point
 *@n: the integer to be printed
 *Return: Nothing
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = n * -1;
		_putchar('-');
	}
	else
	{
		num = n;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
