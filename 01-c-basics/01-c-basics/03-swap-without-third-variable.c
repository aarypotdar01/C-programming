/*
 * Problem: Swap two numbers without using a third variable
 * Concept: Arithmetic operators and variable manipulation
 *
 * Description:
 * This program accepts two integers and swaps their values
 * without using a third variable.
 */

#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
