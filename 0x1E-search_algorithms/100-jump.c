#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for a value in an array of
 * integers using the jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int jump_search(int *array, size_t size, int value)
{
    if (array == NULL)
    {
        printf("Array is NULL\n");
        return -1;
    }
    
    int step = sqrt(size);
    int prev = 0;
    
    while (array[(step < size ? step : size) - 1] < value)
    {
        prev = step;
        step += sqrt(size);
        if (prev >= size)
        {
            return -1;
        }
    }
    
    int i = prev;
    printf("Value checked array[%d] = [%d]\n", i, array[i]);
    while (array[i] < value)
    {
        i++;
        if (i == (step < size ? step : size))
        {
            return -1;
        }
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
    }
    
    if (array[i] == value)
    {
        return i;
    }
    
    return -1;
}
