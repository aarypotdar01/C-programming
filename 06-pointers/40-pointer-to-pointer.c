/*
 * Problem: Demonstrate pointer to pointer
 * Concept: Pointers, pointer to pointer and dereferencing
 *
 * Description:
 * This program demonstrates how a pointer to pointer works
 * using an integer variable.
 */

#include <stdio.h>

int main(void)
{
    int num = 10;

    int *ptr = &num;
    int **ptr2 = &ptr;

    printf("Value of num          = %d\n", num);
    printf("Value using ptr       = %d\n", *ptr);
    printf("Value using ptr2      = %d\n", **ptr2);

    printf("Address of num        = %p\n", (void *)&num);
    printf("Value stored in ptr   = %p\n", (void *)ptr);
    printf("Address of ptr        = %p\n", (void *)&ptr);
    printf("Value stored in ptr2  = %p\n", (void *)ptr2);

    return 0;
}
