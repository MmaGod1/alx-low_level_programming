#include <math.h>
#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump Search
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of value, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step, prev = 0, curr, i;

    if (!array || size == 0)
        return (-1);

    step = (size_t)sqrt((double)size);
    curr = 0;

    /* Jump in blocks until value is smaller than current element */
    while (curr < size && array[curr] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
        prev = curr;
        curr += step;
    }

    if (curr >= size)
        curr = size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);

    /* Linear search within the block */
    for (i = prev; i <= curr; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return ((int)i);
    }

    return (-1);
}
