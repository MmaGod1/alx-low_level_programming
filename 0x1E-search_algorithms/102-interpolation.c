#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 *                        using the interpolation search algorithm
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search
 * Return: first index of value, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t low = 0, high = size - 1, pos;

    if (!array || size == 0)
        return (-1);

    while (low <= high && value >= array[low] && value <= array[high])
    {
        if (array[high] == array[low])
            pos = low;
        else
            pos = low + ((double)(high - low) / (array[high] - array[low])) *
                        (value - array[low]);

        if (pos >= size)
        {
            printf("Value checked array[%lu] is out of range\n", pos);
            return (-1);
        }

        printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

        if (array[pos] == value)
            return (pos);
        else if (array[pos] < value)
            low = pos + 1;
        else
        {
            if (pos == 0) /* prevent underflow */
            {
                printf("Value checked array[%lu] is out of range\n", pos - 1);
                return (-1);
            }
            high = pos - 1;
        }
    }

    /* If search exits normally but pos went out of probe range */
    if (low >= size)
        printf("Value checked array[%lu] is out of range\n", low);

    return (-1);
}
