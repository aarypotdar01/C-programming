/*
 * Problem: Check whether a string is a palindrome
 * Concept: Strings, arrays, loops and comparison
 *
 * Description:
 * This program checks whether a string reads the same
 * forward and backward without using built-in string functions.
 */

#include <stdio.h>

int main(void)
{
    char str[100];
    int length = 0;
    int isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    /* Find the length of the string */
    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    /* Compare characters from both ends */
    for (int i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
    {
        printf("\"%s\" is a palindrome.\n", str);
    }
    else
    {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}
