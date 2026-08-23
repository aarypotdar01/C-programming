/*
 * Problem: Find the sum of digits using recursion
 * Concept: Recursion, modulus operator and integer division
 *
 * Description:
 * This program accepts an integer and calculates the sum of
 * its digits using a recursive function.
 */

#include <stdio.h>

int sumOfDigits(int num)
{
    if (num == 0)
        return 0;

    return (num % 10) + sumOfDigits(num / 10);
}

int main(void)
{
    int num, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    sum = sumOfDigits(num);

    printf("Sum of digits = %d\n", sum);

    return 0;
}
