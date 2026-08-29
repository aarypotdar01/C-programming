/*
 * Problem: Remove duplicate elements from an array
 * Concept: Arrays, nested loops and element shifting
 *
 * Description:
 * This program accepts the elements of an integer array and
 * removes duplicate elements while preserving the order of
 * the first occurrence of each element.
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

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    printf("Array after removing duplicates: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
