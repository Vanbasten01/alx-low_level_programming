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
	int len1, len2, i, j, l, m;
	char *p;
	int s = 0;

	if (s1 == NULL || s1[0] == '\0')
		len1 = 1;
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			len1 = i + 1;
		}
	}
	if (s2 == NULL || s2[0] == '\0')
		len2 = 1;
	else
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			len2 = j + 1;
		}
	}
	p = malloc((sizeof(char) * (len1 + len2)) + 1);
	if (p == NULL)
		return (NULL);
	if (s1 != NULL)
	for (l = 0; s1[l] != '\0'; l++, s++)
	{
		p[l] = s1[l];
	}
	if (s2 != NULL)
	for (m = 0; s2[m] != '\0'; m++, s++)
	{
		p[s] = s2[m];
	}
	return (p);
	free(p);
}
