#include "main.h"
/**
 *print_alphabet_x10 - Entry point
 *Description:  a function that prints 10 times the alphabet,
 *in lowercase, followed by a new line.
 *Return: 0
 */
void print_alphabet_x10(void)
{
	int b;
	int a;

	for (b = 1; b <= 10; b++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
