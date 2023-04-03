#include "main.h"
/**
 *_memcpy - Entry point
 *@dest: destination to be copied to
 *@src: the source to be copied
 *@n:number of byte to be copied
 *Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
