#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - a function that concatenates two strings.
 *@s1:one of the two strings to be concatenated.
 *@s2:one of the two strings to be concatenated.
 *@n:number of bytes to be concatenated to the first string
 *from the second string.
 *Return:a pointer that points to a newly allocated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		;
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		;
	}

	if (n > len2)
		n = len2;


	p = malloc(len1 + n + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
	free(p);
}
