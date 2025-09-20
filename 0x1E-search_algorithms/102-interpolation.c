#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 *                        using the Interpolation search algorithm.
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the value if found, otherwise -1.
 *         Prints each value checked and "out of range" if probe exceeds array.
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;
	double fraction;

	if (!array)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		fraction = (double)(high - low) / (array[high] - array[low]) *
			(value - array[low]);
		pos = low + (size_t)fraction;

		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return ((int)pos);

		if (array[pos] < value)
			low = pos + 1;
		else
		{
			if (pos == 0) /* prevent underflow */
				break;
			high = pos - 1;
		}
	}

	return (-1);
}
