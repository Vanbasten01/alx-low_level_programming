#include "function_pointers.h"
/**
 *array_iterator -  a function that executes a function given
 *as a parameter on each element of an array.
 *@array:array of values to enact action on
 *@size:size of the array.
 *@action: function to perform on array values.
 *Return: void.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
