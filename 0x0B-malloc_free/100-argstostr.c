#include "main.h"
#include <stdlib.h>
int strlength(char *s);

/**
 *argstostr - a function that concatenates all the arguments
 *of your program.
 *@ac: argument count.
 *@av: a pointer to an array containing the arguments passed.
 *Return:a pointer to a new string otherwise NULL.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	int size = 0;
	int s = 0;
	char *P;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		size += strlength(av[i]) + 1;

	P = malloc((size * sizeof(char)) + 1);
	if (P == NULL)
		return (NULL);
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			P[s] = av[j][k];
			s++;
		}
		P[s] = '\n';
		s++;
	}
	P[s] = '\0';
	return (P);
}
/**
 *strlength - a function that returns the length of a string.
 *@s:a pointer to the string we should count its length.
 *Return: the length.
 */
int strlength(char *s)
{
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
