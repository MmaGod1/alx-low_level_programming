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
    size_t step, prev = 0, curr = 0, upper, i;

    if (!array || size == 0)
        return (-1);

    step = (size_t)sqrt((double)size);

    /* Jump in blocks */
    while (curr < size && array[curr] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", curr, array[curr]);
        prev = curr;
        curr += step;
    }

    /* Calculate the upper bound for printing */
    upper = curr < size ? curr : size;
    printf("Value found between indexes [%lu] and [%lu]\n", prev, upper);

    /* Linear search within the block (safe with min(curr, size-1)) */
    for (i = prev; i < upper; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return ((int)i);
    }

    return (-1);
}
