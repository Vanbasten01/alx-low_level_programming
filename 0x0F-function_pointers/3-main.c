#include "3-calc.h"
/**
 *main - calculates simple mathematical operation.
 *@argc: number of arguments.
 *@argv: string of arguments.
 *Return: 0 succes.
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
