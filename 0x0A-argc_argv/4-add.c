#include "main.h"
#include "stdlib.h"
#include "stdio.h"
/**
 *main -  a program that adds positive numbers.
 *@argc: arguements count
 *@argv: array of arguments
 *Return: 0 (Succes) and 1 in case of Error
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	char *c;

	for (i = 1; i < argc; i++)
	{
		for (c = argv[i]; *c != '\0'; c++)
		{
			if (*c < '0' || *c > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

