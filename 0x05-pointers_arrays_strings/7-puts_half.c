#include "main.h"
/**
 *puts_half - Entry point
 *@str: str input
 *Return: nothing
 */
void puts_half(char *str)
{
	int len;
	int mid;
	int i;

	for (len = 0; str[len] != '\0'; len++)
		;

		len++;
		mid = len / 2;

		for (i = mid; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}
