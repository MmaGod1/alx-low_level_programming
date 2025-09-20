#include "search_algos.h"
/**
 * recursive_search - searches for a value in an array of
 * integers using the binary search algorithm
 *
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int binary_search(int *array, size_t size, int value)
{
    int left = 0, right = size - 1, mid;
    size_t i

    if (array == NULL)
    {
        printf("Array is NULL\n");
        return -1;
    }

    while (left <= right)
    {
        mid = left + (right - left) / 2;
        
        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
            {
                printf(", ");
            }
        }
        printf("\n");

        if (array[mid] == value)
        {
            return mid;
        }
        else if (array[mid] < value)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}
