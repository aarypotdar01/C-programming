/*
 * Problem: Print Floyd's Triangle
 * Concept: Nested loops and sequential number generation
 *
 * Description:
 * This program prints Floyd's Triangle, where consecutive
 * natural numbers are arranged in increasing rows.
 */

#include <stdio.h>

int main(void)
{
    int rows;
    int number = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", number);
            number++;
        }

        printf("\n");
    }

    return 0;
}
