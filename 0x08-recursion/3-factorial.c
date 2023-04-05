#include "main.h"
/**
 *factorial - Entry point
 *@n: the given number
 *Return: the factorial of the given number
 */
int factorial(int n)
{
	int fact = 0;

	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
	fact = n * factorial(n - 1);
	return (fact);
}

