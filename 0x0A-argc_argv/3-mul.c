#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main - a program that multiplies two number
 *@argc: arguments count
 *@argv: an array of strings...
 *Return: 0 (succes) otherwise 1
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}

