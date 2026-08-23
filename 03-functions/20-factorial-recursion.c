/*
 * Problem: Find the factorial of a number using recursion
 * Concept: Recursion, functions and multiplication
 *
 * Description:
 * This program accepts a non-negative integer and calculates
 * its factorial using a recursive function.
 */

#include <stdio.h>

unsigned long long factorial(int num)
{
    if (num == 0 || num == 1)
        return 1;

    return num * factorial(num - 1);
}

int main(void)
{
    int num;
    unsigned long long result;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        result = factorial(num);
        printf("Factorial of %d = %llu\n", num, result);
    }

    return 0;
}
