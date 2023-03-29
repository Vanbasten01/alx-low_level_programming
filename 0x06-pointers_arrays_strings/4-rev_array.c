#include "main.h"
/**
 *reverse_array - Entry point
 *@a: the array to be reversed
 *@n: Number of the elements of the array
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int mid = n / 2;
	int temp;

	for (i = 0; i < mid; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
