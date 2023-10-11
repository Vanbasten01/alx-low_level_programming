#include "search_algos.h"

/**
 * finder - Helper function for binary search
 * @array: Pointer to the array to search in
 * @left: Left index of the search interval
 * @right: Right index of the search interval
 * @value: Value to search for
 *
 * Return: Index of the value in the array, or -1 if not found
 */
int finder(int *array, int left, int right, int value)
{
	int mid, i;

	if (left > right)
		return (-1);

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", i);
	printf("%d\n", right);


	mid = (left + right) / 2;

	if (array[mid] == value)
		return (mid);

	if (array[mid] < value)
		return (finder(array, mid + 1, right, value));

	return (finder(array, left, mid - 1, value));
}

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the array to search in
 * @size: Size of the array
 * @value: Value to search for
 *
 * Return: Index of the value in the array, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (finder(array, 0, (int)size - 1, value));
}

