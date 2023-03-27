#include "main.h"
/**
 *swap_int - Entry point
 *Description: a programme that swaps the values of two integers
 *@a: the first pointer
 *@b: the second pointer
 *Return: nothing
 **/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
