#include "main.h"
/**
 *_strchr - Entry point
 *@s: the string to seach in
 *@c: the character to be found
 *Return: a pointer to the first occurrence of the character c
 *otherwise NULL.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
		return ('\0');
}
