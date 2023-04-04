#include "main.h"
/**
 *_strstr - Entry point
 *@haystack:String to search
 *@needle:Substring to be found.
 *Return: a pointer to the beginning of the located substring
 *otherwise NULL.
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int len, i;
	int j = 0;

	for (len = 0; haystack[len] != '\0'; len++)
	{
		;
	}
		for (i = 0; haystack[i] != '\0'; i++)
		{
			while (needle[j] == haystack[i])
			{
				j++;
				continue;
			}
		}
		return (&haystack[(len - j)]);
}
