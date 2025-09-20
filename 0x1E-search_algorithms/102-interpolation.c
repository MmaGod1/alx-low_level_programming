#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int interpolation_search(int *array, size_t size, int value)
{
    int low = 0, pos;
    int high = size - 1;

    if (array == NULL)
    {
        printf("Array is NULL\n");
        return (-1);
    }
    
    while (low <= high && value >= array[low] && value <= array[high])
    {
        pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
        
        printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
        
        if (array[pos] == value)
        {
            return (pos);
        }
        else if (array[pos] < value)
        {
            low = pos + 1;
        }
        else
        {
            high = pos - 1;
        }
    }
    
    printf("Value checked array[%d] is out of range\n", high);
    return (-1);
}
