/*
 * Problem: Reverse a number
 * Concept: While loop, modulus operator and integer division
 *
 * Description:
 * This program accepts an integer and reverses its digits
 * using the modulus operator and integer division.
 */

#include <stdio.h>

int main(void)
{
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
