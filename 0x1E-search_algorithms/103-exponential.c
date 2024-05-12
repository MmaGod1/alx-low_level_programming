#include <stdio.h>
/**
  * _binary_search - Searches for a value in a sorted array
  *                  of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the index where the value is located.
  */
int binary_search(int *array, int left, int right, int value)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        
        printf("Searching in array: ");
        for (int i = left; i <= right; i++)
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
/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the index where the value is located.
  */
int exponential_search(int *array, size_t size, int value)
{
    if (array == NULL)
    {
        printf("Array is NULL\n");
        return -1;
    }
    
    if (array[0] == value)
    {
        return 0;
    }
    
    int bound = 1;
    while (bound < size && array[bound] <= value)
    {
        printf("Value checked array[%d] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }
    
    int left = bound / 2;
    int right = (bound < size ? bound : size) - 1;
    
    printf("Value found between indexes [%d] and [%d]\n", left, right);
    
    return binary_search(array, left, right, value);
}
