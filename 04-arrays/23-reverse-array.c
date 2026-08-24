/*
 * Problem: Reverse an array
 * Concept: Arrays, loops and index manipulation
 *
 * Description:
 * This program accepts the elements of an integer array and
 * reverses the array by swapping elements from both ends.
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

    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    printf("Reversed array: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
