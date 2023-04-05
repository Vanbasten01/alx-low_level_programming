#include "main.h"
/**
 *_strlen_recursion - Entry point
 *@s: the string we are getting the length of
 *Return: the length
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
