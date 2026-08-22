/*
 * Problem: Generate the Fibonacci series up to N terms
 * Concept: Loops, variables and sequential number generation
 *
 * Description:
 * This program accepts the number of terms from the user
 * and generates the Fibonacci series using an iterative approach.
 */

#include <stdio.h>

int main(void)
{
    int n;
    int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive number of terms.\n");
    }
    else
    {
        printf("Fibonacci series: ");

        for (int i = 1; i <= n; i++)
        {
            printf("%d ", first);

            next = first + second;
            first = second;
            second = next;
        }

        printf("\n");
    }

    return 0;
}
