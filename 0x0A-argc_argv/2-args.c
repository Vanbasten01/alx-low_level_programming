#include "main.h"
#include <stdio.h>
/**
 *main -  a program that prints all arguments it receives
 *@argc: argument count
 *@argv: an array of strings...
 *Return: 0 (succes)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
