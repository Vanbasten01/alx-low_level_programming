#include "main.h"
/**
 **_strncat - Entry point
 *@dest: destination string
 *@src: the string to be concatenated
 *@n: number of characters from src to be joined.
 *Return:  a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	int  i;

	for (len = 0; dest[len] != '\0'; len++)
	{
		;
	}
		for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[len + i] = src[i];
		}
		return (dest);
}
