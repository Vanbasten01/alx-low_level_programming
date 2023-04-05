#include "main.h"
/**
 *_print_rev_recursion - Entry point
 *@s: the string to be printed in reverse
 *Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
		return;
}

