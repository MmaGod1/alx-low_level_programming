#include "search_algos.h"

/**
 * _binary_search - searches for a value in a subarray using binary search
 * @array: pointer to the array
 * @left: left index of subarray
 * @right: right index of subarray
 * @value: value to search for
 *
 * Return: index of value or (-1) if not found
 */
static int _binary_search(int *array, int left, int right, int value)
{
	int mid, i;

	if (!array)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");

		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index of value or (-1) if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	int left, right;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = (bound < size) ? (int)bound : (int)(size - 1);
	printf("Value found between indexes [%d] and [%d]\n", left, right);

	return (_binary_search(array, left, right, value));
}
