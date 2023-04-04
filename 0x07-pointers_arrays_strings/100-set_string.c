#include "main.h"
/**
 *set_string - Entry point
 *@s: Pointer which its value has to be changed
 *@to: the value to be set in the pointer
 *Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}

