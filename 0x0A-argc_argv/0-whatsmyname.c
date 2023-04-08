#include "main.h"
#include <stdio.h>
/**
 *main - a program that prints its name, followed by a new line.
 *@argc: arguments count
 *@argv: an array of strings
 *Return: 0 succes;
 */
int main(int argc, char *argv[])
{

	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
