/*
 * Problem: Print Pascal's Triangle
 * Concept: Nested loops, combinations and arithmetic operations
 *
 * Description:
 * This program prints Pascal's Triangle for a given number
 * of rows using the relationship between consecutive elements.
 */

#include <stdio.h>

int main(void)
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++)
    {
        int value = 1;

        /* Print spaces for triangular alignment */
        for (int space = 0; space < rows - i - 1; space++)
        {
            printf("  ");
        }

        for (int j = 0; j <= i; j++)
        {
            printf("%d   ", value);

            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
