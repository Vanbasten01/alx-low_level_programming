#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - Entry point
 *Description: this function prints the sum of the two diagonals
 *of a square matrix of integers.
 *@a: Array of square matrix
 *@size: Size of the square matrix
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

		for (i = 0; i < size; i++)
		{
			sum1 = sum1 + a[i];
			sum2 = sum2 + a[size - i - 1];
			a = a + size;
		}
		printf("%d, ", sum1);
		printf("%d\n", sum2);
}


