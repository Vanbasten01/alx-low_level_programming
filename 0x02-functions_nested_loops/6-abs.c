#include "main.h"
/**
 *_abs - Entry point
 *@a: input as integer
 *Return: absolute value
 */
int _abs(int a)

{
	if (a >= 0)
	{
		return (a);
	}
	else
	{
		return (a * (-1));
	}
}

