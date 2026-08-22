/*
 * Problem: Find the factorial of a number
 * Concept: Loops and arithmetic operations
 *
 * Description:
 * This program accepts a non-negative integer and calculates
 * its factorial using a loop.
 */

#include <stdio.h>

int main(void)
{
    int num;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        for (int i = 1; i <= num; i++)
        {
            factorial *= i;
        }

        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}
