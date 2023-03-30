#include "main.h"
/**
 *leet - Entry point
 *@str: string as input
 *Return: (s)
 */
char *leet(char *str)
{
	char lett[] = "aAeEoOTtLl";
	char numb[] = "4433007711";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == lett[j])
			{
				str[i] = numb[j];
			}
		}
	}
	return (str);
}


