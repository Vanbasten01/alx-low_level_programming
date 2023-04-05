#include "main.h"
/**
 *prime_num - Entry point
 *@n: the number to check if it is prime or not
 *@i:the recursive iterator searching for success value
 *Return: 1 if n is Prime otherwise -1
 */
int prime_num(int n, int i)
{
	if (n % i == 0 && n != i)
		return (0);

	else if (i == n)
		return (1);

	else
		return (prime_num(n, i + 1));
}
/**
 *is_prime_number - Entry point
 *@n: the number to check if it is prime or not
 *Return: 1 if n is Prime otherwise -1
 */
int is_prime_number(int n)
{
	if (n <=  1)
		return (0);
	else
		return (prime_num(n, 2));
}
