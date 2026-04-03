#include "day3_4.h"
#include <assert.h>

/* Helper function for testing */
int is_sorted_asc(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        if(arr[i] > arr[i+1]) return 0;
    }
    return 1;
}

int is_sorted_desc(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        if(arr[i] < arr[i+1]) return 0;
    }
    return 1;
}

int main()
{
    int arr1[] = {5, 2, 9, 1, 3};
    int arr2[] = {5, 2, 9, 1, 3};

    int size = 5;

    sort_ascending(arr1, size);
    sort_descending(arr2, size);

    assert(is_sorted_asc(arr1, size) == 1);
    assert(is_sorted_desc(arr2, size) == 1);

    printf("Q1 Passed: Sorting works correctly\n");

    return 0;
}