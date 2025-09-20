#include <stdio.h>
#include "search_algos.h"

/**
 * print_subarray - Prints the current subarray being searched
 * @array: Pointer to the first element of the subarray
 * @left: Start index of subarray
 * @right: End index of subarray
 */
static void print_subarray(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i != left)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of value, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right;
	size_t mid;

	if (!array || size == 0)
		return (-1);

	right = size - 1;

	while (left <= right)
	{
		print_subarray(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return ((int)mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
		{
			if (mid == 0)  /* Prevent underflow */
				break;
			right = mid - 1;
		}
	}

	return (-1);
}
