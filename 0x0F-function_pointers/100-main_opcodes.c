#include "function_pointers.h"
/**
 *main - a program that prints the opcodes of its own main function.
 *@argc: number of arguments.
 *@argv: an array of arguments.
 *Return: 0 succes.
 */
int main(int argc, char *argv[])
{
	int a, b;
	char *p;


	if (argc != 2)
		printf("Error\n"), exit(1);
	a = atoi(argv[1]);
	if (a < 0)
		printf("Error\n"), exit(2);
	p = (char *)main;
	for (b = 0; b < a; b++)
	{
		if (b < a - 1)
		printf("%02hhx ", *(p + b));
		else
			printf("%02hhx\n", *(p + (a - 1)));
	}
	return (0);
}
