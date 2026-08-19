/*
 * Problem: Swap two numbers using a third variable
 * Concept: Variables, assignment and temporary storage
 *
 * Description:
 * This program accepts two integers and swaps their values
 * using a third variable as temporary storage.
 */

#include <stdio.h>

int main(void)
{
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
