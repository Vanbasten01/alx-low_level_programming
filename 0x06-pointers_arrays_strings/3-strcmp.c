#include "main.h"
/**
 *_strcmp - Entry point
 *@s1:the first string
 *@s2:the second string
 *Return: 0 or a negative number or a positive number...
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	for (i = 0; s1[i] != '\0'; i++)
	{
		diff = s1[i] - s2[i];
		if (diff > 0 || diff < 0)
		{
			return (diff);
		}
	}
	return (diff);
}


