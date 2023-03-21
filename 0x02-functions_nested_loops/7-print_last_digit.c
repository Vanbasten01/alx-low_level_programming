#include "main.h"
/**
 * print_last_digit - Entry point
 * @a: int input
 * Description: prints the last digit of a number
 * Return: last digit of number a
 */
int print_last_digit(int a)
{
	int b;

	if (a < 0)
		b = -1 * (a % 10);
	else
		b = a % 10;

	_putchar((b % 10) + '0');
	return (b % 10);
}


