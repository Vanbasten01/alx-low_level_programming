#include "main.h"
/**
 *_puts - Entry point
 *@str: String to be printed.
 *Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

