/*
 * Problem: Check whether a number is a palindrome
 * Concept: Loops, modulus operator, integer division and comparison
 *
 * Description:
 * This program accepts an integer, reverses its digits, and
 * compares the reversed number with the original number to
 * determine whether it is a palindrome.
 */

#include <stdio.h>

int main(void)
{
    int num, original, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    if (original == reversed)
        printf("%d is a palindrome.\n", original);
    else
        printf("%d is not a palindrome.\n", original);

    return 0;
}
