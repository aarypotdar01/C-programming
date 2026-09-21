#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, newSize;

    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    int *arr = malloc(n * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter new size of array: ");
    scanf("%d", &newSize);

    int *temp = realloc(arr, newSize * sizeof(int));

    if (temp == NULL)
    {
        printf("Memory reallocation failed.\n");
        free(arr);
        return 1;
    }

    arr = temp;

    if (newSize > n)
    {
        printf("Enter %d additional elements:\n", newSize - n);

        for (int i = n; i < newSize; i++)
        {
            scanf("%d", &arr[i]);
        }
    }

    printf("\nArray elements are:\n");

    for (int i = 0; i < newSize; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
