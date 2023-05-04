#include "main.h"
/**
 * get_endianness - checks the endianness.
 * Return: 0 if it is a big endian, 1 for a little endian.
 */
int get_endianness(void)
{
	unsigned int n = 1;

	return (*(char *)&n);
}
