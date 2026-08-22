/*
 * Problem: Find the GCD of two numbers using a function
 * Concept: Functions, modulus operator and loops
 *
 * Description:
 * This program accepts two integers and calculates their
 * Greatest Common Divisor (GCD) using a user-defined function.
 */

#include <stdio.h>

/*
 * Function: findGCD
 * Purpose: Find the Greatest Common Divisor of two integers
 */
int findGCD(int a, int b)
{
    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

int main(void)
{
    int num1, num2, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    gcd = findGCD(num1, num2);

    printf("GCD of %d and %d = %d\n", num1, num2, gcd);

    return 0;
}
