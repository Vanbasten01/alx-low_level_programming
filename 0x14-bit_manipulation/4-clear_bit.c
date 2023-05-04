#include "main.h"
/**
 *clear_bit -  a function that sets the value of a bit
 *to 0 at a given index.
 *@n: a pointer to the number to be modified.
 *@index:  the index of the bit we should set to 1.
 *Return: 1 succes otherwise -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
