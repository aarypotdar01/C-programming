/*
 * Problem: Find the length of a string
 * Concept: Strings, arrays and loops
 *
 * Description:
 * This program accepts a string from the user and finds its
 * length without using the built-in strlen() function.
 */

#include <stdio.h>

int main(void)
{
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    printf("Length of the string = %d\n", length);

    return 0;
}
