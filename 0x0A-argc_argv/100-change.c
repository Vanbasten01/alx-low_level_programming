#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main -  a program that prints the minimum number of coins
 *to make change for an amount of money.
 *@argc: number of arguments.
 *@argv: an array of arguments.
 *Return: 0 (Succes) otherwise 1.
 */
int main(int argc, char *argv[])
{

	int i;
	int amount;
	int count = 0;
	int rem = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5; i++)
	{
		count = count +  amount / coins[i];
		if (count == 0)
		break;
		rem = amount  % coins[i];
		amount = rem;
	}
		printf("%d\n", count);

		return (0);
}
