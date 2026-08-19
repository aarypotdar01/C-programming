/*
 * Problem: Check whether a number is even or odd
 * Concept: Modulus operator and conditional statements
 *
 * Description:
 * This program accepts an integer and determines whether
 * the number is even or odd using the modulus operator.
 */

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);

    return 0;
}
