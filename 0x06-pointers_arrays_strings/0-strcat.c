#include "main.h"
/**
 **_strcat - Entry point
 *@dest: destination string
 *@src: the string to be appended
 *Return:  a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int len1;
	int i;

	for (len = 0; dest[len] != '\0'; len++)
	{
		;
	}
		for (len1 = 0; src[len1] != '\0'; len1++)
		{
			;
		}
			for (i = 0; i <= len1; i++)
			{
				dest[len + i] = src[i];
			}
			return (dest);
}
