#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *main -  a program that multiplies two positive numbers.
 *@argc: number of arguments.
 *@argv: an array of strings
 *Return: result of muliplication otherwise it prints Error.
 */
int main(int argc, char *argv[])
{
	unsigned int result = 0;
	int i;
	char *c;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < 3; i++)
	{
		for (c = argv[i]; *c; c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%u\n", result);
	return (result);
}
