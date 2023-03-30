#include "main.h"


/**
 * is_delimetre - entry point
 * @s: Character to be checked.
 *
 * This function checks to see if a character is
 * a special character by comparing it with specific
 * characters.
 *
 * Return: 1 or 0.
 */

int is_delimetre(char s)
{
	if (s == '\t' ||
		s == '\n' ||
		s == ' ' ||
		s == ',' ||
		s == ';' ||
		s == '.' ||
		s == '!' ||
		s == '?' ||
		s == '"' ||
		s == '(' ||
		s == ')' ||
		s == '{' ||
		s == '}'
	)
		return (1);
	else
		return (0);
}


/**
 *cap_string - Entry point
 *@str: the strin to be converted
 *Return: str
 */

char *cap_string(char *str)
{
	int i;

	if (str[0] != '\0' && str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z' && is_delimetre(str[i - 1]))
		{
			str[i] = str[i] - 32;
		}

	}
	return (str);
}


