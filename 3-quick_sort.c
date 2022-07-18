#include "sort.h"

/**
 * swap - switch position of the elements passed
 *
 * @x: pointer the first element
 * @y: pointer the second element
 */

void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int partition(int *array, size_t start, size_t end, size_t size)
{
    size_t i;
    int pivot, pIndex;

    pivot = array[end];
    pIndex = start;

    for (i = start; i < end; i++)
    {
        if (array[i] < pivot)
        {
            swap(&array[i], &array[pIndex]);
            pIndex++;
        }
    }
    swap(&array[pIndex], &array[end]);
    print_array(array, size);

    return pIndex;
}

void quick(int *array, size_t start, size_t end, size_t size)
{
    int pIndex;

    if (start < end)
    {
        pIndex = partition(array, start, end, size);
        quick(array, start, pIndex - 1, size);
        quick(array, pIndex + 1, end, size);
    }
}

void quick_sort(int *array, size_t size)
{
    size_t start, end;

    start = 0;
    end = size - 1;

    quick(array, start, end, size);
}
