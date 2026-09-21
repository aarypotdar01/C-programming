#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    //ptr = malloc(number_of_bytes);
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

    printf("\nArray elements are:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    free(arr);

    return 0;
}
