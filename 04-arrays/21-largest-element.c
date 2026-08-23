/*
 * Problem: Find the largest element in an array
 * Concept: Arrays, loops and comparison
 *
 * Description:
 * This program accepts the elements of an integer array and
 * finds the largest element using a loop.
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

    int largest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    printf("Largest element = %d\n", largest);

    return 0;
}
