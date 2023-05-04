#include "main.h"
/**
 *flip_bits - Calculates the number of bits needed to flip from
 *one number to another.
 *@n: The starting number.
 *@m: The target number to flip the bits to.
 *Return: The number of bits that need to be flipped
 *to transform n into m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;

	unsigned int count = 0;

	for (; diff != 0; diff >>= 1)
	{
		if (diff & 1)
		count++;
	}
	return (count);
}

