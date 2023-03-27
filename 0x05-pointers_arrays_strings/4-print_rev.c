#include "main.h"
/**
 *print_rev - Entry point
 *Description:  a function that prints a string, in reverse.
 *@s: string to be printed
 *Return: nothing
 */
void print_rev(char *s)
{
	int a, b, c;

	c = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		c++;
	}
	for (b = (c - 1); b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}

