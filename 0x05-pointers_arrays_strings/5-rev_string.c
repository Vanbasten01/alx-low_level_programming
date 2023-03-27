#include "main.h"
/**
 * rev_string - Entry point
 * @s: String to be reversed.
 *
 * This program reverses the characters
 * of a string from a character pointer,
 * directly to the memory address.
 *
 * return: Nothing
 */
void rev_string(char *s)
{
	int len = 0;
	char temp;
	int i;
	int mid;

	for (len = 0; s[len] != '\0'; len++)
	{
		;
	}
	mid = len / 2;

	for (i = 0; i < mid; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}


