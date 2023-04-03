#include "main.h"
/**
 *_memset - Entry point
 *@s: a pointer to the memory area
 *@b: the constant byte
 *@n: number of byte
 *Return: a pointer to the memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
