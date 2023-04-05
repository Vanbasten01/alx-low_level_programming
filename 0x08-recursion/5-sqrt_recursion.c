#include "main.h"
/**
 *sqrt_calculator - Entry point
 *@n:the number we should print the square root of
 *@i: the iterator
 *Return: the natural square root of a number or -1
 */
int sqrt_calculator(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (sqrt_calculator(n, i + 1));
}

/**
 *_sqrt_recursion - Entry point
 *@n: the number we should print the square root of
 *Return:the natural square root of a number otherwise -1
 *in case n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_calculator(n, 0));
}
