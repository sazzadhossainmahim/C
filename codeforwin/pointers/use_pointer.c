/**
 * C program to create, initialize and use pointers
 */

#include <stdio.h>
int main()
{
    int number = 10;
    int *ptr;

    ptr = &number;

    printf("Address of number = %d\n", &number);
    printf("Value of number = %d\n", number);

    printf("Address of pointer = %d\n", &ptr);
    printf("Value of pointer = %d\n", ptr);
    printf("Value pointed by pointer = %d\n", *ptr);

    return 0;
}
