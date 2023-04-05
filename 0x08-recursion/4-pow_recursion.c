#include "main.h"
/**
 *_pow_recursion - Entry point
 *@x: number to be raised to a power
 *@y:the Power to raise the number to
 *Return: the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	int value = 0;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	else
	value = x * _pow_recursion(x, y - 1);
	return (value);
}
