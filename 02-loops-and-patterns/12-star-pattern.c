/*
 * Problem: Print a right-angled star pattern
 * Concept: Nested loops
 *
 * Description:
 * This program prints a pattern of stars in which each row
 * contains one more star than the previous row.
 */

#include <stdio.h>

int main(void)
{
    int rows;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
