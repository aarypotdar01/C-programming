/*
 * Problem: Find the largest element using pointer arithmetic
 * Concept: Pointers, arrays and pointer arithmetic
 *
 * Description:
 * This program finds the largest element of an integer array
 * using a pointer instead of array indexing.
 */

#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;
    int largest = *ptr;

    for (int i = 1; i < n; i++)
    {
        ptr++;

        if (*ptr > largest)
        {
            largest = *ptr;
        }
    }

    printf("Largest element = %d\n", largest);

    return 0;
}
