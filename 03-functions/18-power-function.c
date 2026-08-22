/*
 * Problem: Implement a power(x, n) function
 * Concept: User-defined functions, loops and multiplication
 *
 * Description:
 * This program calculates x raised to the power n using
 * a user-defined function without using the built-in pow()
 * function.
 */

#include <stdio.h>

long long power(int x, int n)
{
    long long result = 1;

    for (int i = 1; i <= n; i++)
    {
        result *= x;
    }

    return result;
}

int main(void)
{
    int x, n;
    long long result;

    printf("Enter the base (x): ");
    scanf("%d", &x);

    printf("Enter the exponent (n): ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Please enter a non-negative exponent.\n");
    }
    else
    {
        result = power(x, n);
        printf("%d^%d = %lld\n", x, n, result);
    }

    return 0;
}
