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
	int i = 0;

	while (haystack[i] != '\0')
	{
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (needle[i] != haystack[i])
			{
				break;
			}
		}
		if (needle[i] == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
