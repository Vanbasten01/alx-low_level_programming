#include "main.h"
/**
 *puts2 - Entry point
 *Description:  a function that prints every other character of a string
 *@str: str input
 * Return: nothing
 */
void puts2(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
		if (len % 2 == 0)
		_putchar(str[len]);
	}
	_putchar('\n');
}


