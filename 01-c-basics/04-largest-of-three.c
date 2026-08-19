/*
 * Problem: Find the largest of three numbers
 * Concept: Conditional statements
 *
 * Description:
 * This program accepts three integers and determines
 * the largest among them using conditional statements.
 */

#include <stdio.h>

int main(void)
{
    int a, b, c, largest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    printf("The largest number is: %d\n", largest);

    return 0;
}
