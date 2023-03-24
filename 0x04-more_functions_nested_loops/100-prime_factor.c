#include <stdio.h>
/**
 *main - Entry point
 *
 *Description: this is a program that finds and prints the largest prime
 *factor of the number.
 *
 *Return: Always 0
 */
int main(void)
{
	long int num, prime;

	num = 612852475143;
	for (prime = 2; prime <= num; prime++)
	{
		if (num % prime == 0)
		{
			num = num / prime;
			prime--;
		}
	}
	printf("%ld\n", prime);
	return (0);
}
