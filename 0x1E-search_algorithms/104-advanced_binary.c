#include "search_algos.h"

/**
 *advanced_binary - Searches for the leftmost occurrence of a value in a
 *sorted array using an advanced binary search algorithm.
 *@array: a pointer to the sorted array to search in.
 *@size: the number of elements in the array.
 *@value: the value to search for.
 *Return: the index where the leftmost occurrence of the value is found,
 *or -1 if not found.
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t left, right, mid, i, count;

	left = 0;
	right = size - 1;
	if (!array)
		return (-1);
	while (left <= right)
	{
		count = 0;
		i = left;
		while (i <= right)
		{
			if (count == 0 && i == right)
				printf("Searching in array: %d\n", array[i]);
			if (count == 0 && i != right)
				printf("Searching in array: %d, ", array[i]);
			if (count != 0 && i != right)
				printf("%d, ", array[i]);
			count++;
			i++;
		}
		if (left != right)
			printf("%d\n", array[right]);
		mid = left + (right - left) / 2;
		if (array[mid] == value && array[mid - 1] != value)
			return (mid);
		if (right - left == 2 && array[mid] == value && array[mid - 1] == value)
			return (mid - 1);
		if (array[mid] < value)
			left = mid + 1;
		if (array[mid] > value)
			right = mid - 1;
		if (array[mid] == value && array[mid - 1] == value)
			right = mid;
	}
	return (-1);
}
