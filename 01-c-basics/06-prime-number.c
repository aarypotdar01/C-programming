/*
 * Problem: Check whether a number is prime
 * Concept: Loops, conditional statements and modulus operator
 *
 * Description:
 * This program accepts an integer and checks whether it is
 * a prime number. A prime number has exactly two factors:
 * 1 and itself.
 */

#include <stdio.h>

int main(void)
{
    int num, i, is_prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1)
    {
        is_prime = 0;
    }
    else
    {
        for (i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                is_prime = 0;
                break;
            }
        }
    }

    if (is_prime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
