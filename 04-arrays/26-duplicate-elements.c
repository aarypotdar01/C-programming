/*
 * Problem: Find duplicate elements in an array
 * Concept: Arrays, nested loops and comparison
 *
 * Description:
 * This program accepts the elements of an integer array and
 * finds all duplicate elements without printing the same
 * duplicate more than once.
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

    printf("Duplicate elements: ");

    for (int i = 0; i < n; i++)
    {
        int alreadyPrinted = 0;

        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                alreadyPrinted = 1;
                break;
            }
        }

        if (alreadyPrinted)
            continue;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d ", arr[i]);
                break;
            }
        }
    }

    printf("\n");

    return 0;
}
