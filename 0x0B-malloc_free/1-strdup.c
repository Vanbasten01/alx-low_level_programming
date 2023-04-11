#include "main.h"
#include <stdlib.h>
/**
 *_strdup -a function that returns a pointer to a newly
 *allocated space in memory,which contains a copy
 *of the string given as a parameter.
 *@str: the string to be duplicated.
 *Return: a pointer to the duplicated string otherwise NULL.
 */
char *_strdup(char *str)
{
	char *p;
	int i, j;
	int length = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		length = i + 1;
	}
	p = malloc((length * sizeof(char)) + 1); /* including the NULL terminator*/
	if (p == NULL)
		return (NULL);
	for (j = 0; j < length; j++)
	{
		p[j] = str[j];
	}
	return (p);
	free(p);
}
