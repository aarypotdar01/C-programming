/*
 * Problem: Print the multiplication table of a number
 * Concept: For loop and arithmetic operations
 *
 * Description:
 * This program accepts an integer from the user and prints
 * its multiplication table from 1 to 10.
 */

#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}
