/*
 * Problem: Left rotate an array by K positions
 * Concept: Arrays, loops, indexing and modular arithmetic
 *
 * Description:
 * This program accepts an integer array and rotates its
 * elements to the left by K positions.
 */

#include <stdio.h>

int main(void)
{
    int n, k;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    k = k % n;

    for (int r = 0; r < k; r++)
    {
        int first = arr[0];

        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        arr[n - 1] = first;
    }

    printf("Array after left rotation: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
