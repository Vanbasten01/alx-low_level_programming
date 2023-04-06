#include "main.h"
/**
 *_length - Entry point
 *@s: the string we are getting the length of
 *Return: the length
 */
int _length(char *s)
{
	if (*s != '\0')
	{
		return (1 + _length(s + 1));
	}
	else
		return (0);
}
/**
 *check - Entry point
 *@s: the string to be checked if it is
 *a palindrome or not.
 *@l: is as an index to check with the first elements of the string
 *@l1:is as an index to check with the string in reverse
 *Return: 1 in case it is palindrome otherwise 0
 */
int check(char *s, int l, int l1)
{
	if (s[l] == s[l1])
	{
		if (l == l1 || l1 == l + 1)
		{
			return (1);
		}
		return (check(s, l + 1, l1 - 1));
	}
	return (0);
}
/**
 *is_palindrome - Entry point
 *@s: the string to be checked if it is
 *palindrome.
 *Return: 1 in case true otherwise 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (check(s, 0, _length(s) - 1));
	}
	return (0);
}
