/*
 * Problem: Find the LCM of two numbers using a function
 * Concept: Functions, loops and arithmetic operations
 *
 * Description:
 * This program accepts two integers and calculates their
 * Least Common Multiple (LCM) using a user-defined function.
 */

#include <stdio.h>

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

int findLCM(int a, int b)
{
    return (a / findGCD(a, b)) * b;
  //Dividing first reduces the chance of integer overflow when working with larger integers.
}

int main(void)
{
    int num1, num2, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    lcm = findLCM(num1, num2);

    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
