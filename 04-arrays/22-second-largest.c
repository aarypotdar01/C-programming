/*
 * Problem: Find the second largest element in an array
 * Concept: Arrays, loops and comparison
 *
 * Description:
 * This program accepts the elements of an integer array and
 * finds the second largest distinct element.
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
    int secondLargest = 0;
    int found = 0;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
            found = 1;
        }
        else if (arr[i] < largest && (!found || arr[i] > secondLargest))
        {
            secondLargest = arr[i];
            found = 1;
        }
    }

    if (found)
        printf("Second largest element = %d\n", secondLargest);
    else
        printf("No distinct second largest element exists.\n");

    return 0;
}
