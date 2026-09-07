/*
 * Problem: Remove spaces from a string
 * Concept: Strings, character arrays and loops
 *
 * Description:
 * This program removes all spaces from a string without
 * using built-in string functions.
 */

#include <stdio.h>

int main(void)
{
    char str[100];
    int i = 0;
    int j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n')
    {
        if (str[i] != ' ')
        {
            str[j] = str[i];
            j++;
        }

        i++;
    }

    str[j] = '\0';

    printf("String after removing spaces: %s\n", str);

    return 0;
}
