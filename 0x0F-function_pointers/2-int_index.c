#include "function_pointers.h"
/**
 *int_index - a function that searches for an integer.
 *@array:array of value to check for integer.
 *@size:the size of the array.
 *@cmp:the function to perform comparison of values.
 *Return:the index of the matching element of the array otherwise -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}


