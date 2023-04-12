#include "main.h"
#include <stdlib.h>
/**
 *str_concat -  a function that concatenates two strings.
 *@s1: one of the two strings to be concatenated.
 *@s2: one of the two strings to be concatenated.
 *Return: a pointer to the new place allocated in memory for
 *the concatenated string otherwise NULL.
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, l, m, len1, len2;
	char *p;

	for (i = 0; s1[i] != '\0'; i++)
	{
		len1 = i + 1;
	}
	if (s1[0] == '\0')
		len1 = 1;
	else if (s1 == NULL)
		len1 = 0;

	for (j = 0; s2[j] != '\0'; j++)
	{
		len2 = j + 1;
	}
	if (s2[0] == '\0')
		len2 = 1;
	else if (s2 == NULL)
		len2 = 0;
	p = malloc((len1 + len2 + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (l = 0; l < len1; l++)
	{
		p[l] = s1[l];
	}
	for (m = 0; m < len2; m++)
	{
		p[i + m] = s2[m];
	}
	return (p);
	free(p);
}
