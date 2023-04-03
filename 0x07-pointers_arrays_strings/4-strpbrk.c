#include "main.h"
/**
 *_strpbrk - Entry point
 *@s:source string
 *@accept:accepted characters
 *Return:a pointer to the byte in s that matches one of
 *the bytes in accept otherwise NULL
 */
char *_strpbrk(char *s, char *accept)

{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return ('\0');
}
