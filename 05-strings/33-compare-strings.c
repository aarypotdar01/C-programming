/*
 * Problem: Compare two strings
 * Concept: Strings, character arrays, loops and comparison
 *
 * Description:
 * This program compares two strings character by character
 * without using the built-in strcmp() function.
 */

#include <stdio.h>

int main(void)
{
    char str1[100];
    char str2[100];
    int i = 0;
    int areEqual = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str1[i] != '\0' && str1[i] != '\n' &&
           str2[i] != '\0' && str2[i] != '\n')
    {
        if (str1[i] != str2[i])
        {
            areEqual = 0;
            break;
        }

        i++;
    }

    /*
     * If one string ended before the other, they are different.
     */
    if (str1[i] != str2[i])
    {
        areEqual = 0;
    }

    if (areEqual)
    {
        printf("The strings are equal.\n");
    }
    else
    {
        printf("The strings are not equal.\n");
    }

    return 0;
}
