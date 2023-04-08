#include "main.h"
#include <stdio.h>
/**
 *main -  a program that prints the number of arguments passed into it
 *@argc: argument count
 *@argv: an array of strings...
 *Return: 0 (succes)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)*argv;
	return (0);
}

