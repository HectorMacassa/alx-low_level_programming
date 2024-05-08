#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @array: a pointer to the first element of the array
 * @start: the starting index of the subarray
 * @end: the ending index of the subarray (inclusive)
 */
static void print_array(int *array, size_t start, size_t end)
{
    size_t i;

    printf("Searching in array: ");
    for (i = start; i <= end; i++)
        printf("%d, ", array[i]);
    printf("\b\b\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers using
 * the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1 if value is not
 * present in the array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0, right = size - 1;

    if (array == NULL)
        return (-1);

    print_array(array, left, right);

    while (left <= right)
    {
        size_t mid = left + (right - left) / 2;

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
        {
            left = mid + 1;
            print_array(array, left, right);
        }
        else
        {
            right = mid - 1;
            print_array(array, left, right);
        }
    }

    return (-1);
}
