/*
 * Problem: Reverse a string
 * Concept: Strings, character arrays and loops
 *
 * Description:
 * This program accepts a string and reverses it without
 * using built-in string functions such as strlen() or strrev().
 */

#include <stdio.h>

int main(void)
{
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    /* Find the length of the string */
    while (str[length] != '\0' && str[length] != '\n')
    {
        length++;
    }

    /* Print the string in reverse order */
    printf("Reversed string: ");

    for (int i = length - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}
