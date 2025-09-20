#include "search_algos.h"

/**
 * _interpolation_search_loop - Helper function to search in array range
 * @array: Pointer to the array
 * @size: Size of the array
 * @low: Lower bound of search
 * @high: Upper bound of search
 * @value: Value to search for
 *
 * Return: Index of value, or (-1) if not found
 */
static int _interpolation_search_loop(int *array, size_t size, int low,
		int high, int value)
{
	size_t pos;
	double frac;

	while (size)
	{
		if (array[high] == array[low])
		{
			if (array[low] == value)
			{
				printf("Value checked array[%d] = [%d]\n", low, array[low]);
				return (low);
			}
			break;
		}
		frac = (double)(high - low) / (array[high] - array[low]) *
			(value - array[low]);
		pos = (size_t)(low + frac);

		if (pos >= size)
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
		{
			if (pos == 0)
				break;
			high = pos - 1;
		}
		if (low >= high)
			break;
	}
	return (-1);
}

/**
 * interpolation_search - searches for a value in a sorted array
 *                        using the interpolation search algorithm
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of value, or (-1) if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (_interpolation_search_loop(array, size, 0, size - 1, value));
}
