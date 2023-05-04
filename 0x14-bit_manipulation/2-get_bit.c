#include "main.h"
/**
 *get_bit -  a function that returns the value of a bit at
 *a given index.
 *@n: the number we should get its bit value at specified index.
 *@index: the index of the bit.
 *Return: the value of the indexed bit otherwise -1.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	return ((n >> index) & 1);
}
