#include "main.h"
#include <stdlib.h>

/**
 *
 *
 *
 *
 */
int wordlen(char *s)
{
	int i;

	for (i = 0; s[i] != ' ' && s[i] != '\0'; i++)
	{
		;
	}
	return (i);
}
/**
 *
 *
 *
 *
 */
char **strtow(char *str)
{
	int i, j, k, m;
	int count = 0;
	char **P;
	int len = 0;
	int word_len = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		{
			count++;
		}
	}
	for (len = 0; str[len] != '\0'; len++)
	{
		;
	}
	if (count == 0)
		return (NULL);
	P = malloc(sizeof(char *) * (count + 1));
	if (P == NULL)
		return (NULL);
	for (j = 0; j < len; j++)
	{
		if (str[j] != ' ')
		{
			for (k = 0; k < count; k++)
			{
				word_len = wordlen(&str[j]);
				P[k] = malloc(sizeof(char) * word_len);
				if (P[k] == NULL)
				while (k--> 0)
				{
					free(P[k]);
					free(P);
					return (NULL);
				}
			}
			for (m = 0; m < word_len; m++)
				P[k][m] = str[j + m];
			P[k++][word_len] = '\0';
			j += word_len;
		}
	}
	P[k] = NULL;
	return (P);
}			
