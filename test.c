#include "sort.h"

int pertition(int arr[], int start, int end, int size)
{
    int pivot, pIndex, i;

    pIndex = start;
    pivot = arr[end];

    for (i = start; i < end; i++)
    {
        if (arr[i] < pivot)
        {
            swap(&arr[i], &arr[pIndex]);
            pIndex++;
        }
    }
    swap(&arr[pIndex], &arr[end]);
    print_array(arr, size);

    return pIndex;
}

void quick(int arr[], int start, int end, int size)
{
    int pIndex;

    if (start < end)
    {
        pIndex = pertition(arr, start, end, size);
        quick(arr, start, pIndex - 1, size);
        quick(arr, pIndex + 1, end, size);
    }
}

void quick_sort(int *array, size_t size)
{
    int start, end;

    start = 0;
    end = size - 1;

    quick(array, start, end, size);
}
