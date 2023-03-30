#include "main.h"
/**
 * rot13 - Entry point
 * @str: Pointer to character array.
 * Description: a function that encodes a string using rot13.
 * Return: str
 */
char *rot13(char *str)
{
	char str1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == str1[j])
			{
				str[i] = str2[j];
				break;
			}
		}
	}
	return (str);
}

