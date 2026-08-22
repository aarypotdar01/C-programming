/*
 * Problem: Print an inverted pyramid
 * Concept: Nested loops and pattern generation
 *
 * Description:
 * This program prints an inverted pyramid of stars.
 * The number of stars decreases in each successive row.
 */

#include <stdio.h>

int main(void)
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
