#include "main.h"
/**
 *_strlen - Entry point
 *@s: a pointer
 *DEscription:  a function that returns the length of a string
 *Return: len
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	return (len);
}
