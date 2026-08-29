/*
 * Problem: Copy one string into another
 * Concept: Strings, character arrays and loops
 *
 * Description:
 * This program copies the contents of one string into another
 * without using the built-in strcpy() function.
 */

#include <stdio.h>

int main(void)
{
    char source[100];
    char destination[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(source, sizeof(source), stdin);

    /* Copy characters from source to destination */
    while (source[i] != '\0' && source[i] != '\n')
    {
        destination[i] = source[i];
        i++;
    }

    /* Add null character at the end */
    destination[i] = '\0';

    printf("Original string: %s\n", source);
    printf("Copied string: %s\n", destination);

    return 0;
}
