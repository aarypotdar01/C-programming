/*
 * Problem: Reverse an array using pointers
 * Concept: Pointers, arrays, pointer arithmetic and swapping
 *
 * Description:
 * This program reverses an integer array using pointers
 * instead of array indexing.
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

    int *left = arr;
    int *right = arr + n - 1;

    while (left < right)
    {
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }

    printf("Reversed array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
