// Write a C program to input any number from user and set nth bit of the given number as 1. How to set nth bit of a given number using bitwise operator in C programming. Setting nth bit of a given number using bitwise operator.

// Example

// Input

// Input number: 12
// Input nth bit to set: 0

// Output

// Number after setting nth bit: 13 in decimal

// 17-12-20

#include <stdio.h>

int main()
{
    int number, input, NewNumber;
    printf("Enter the Number:");
    scanf("%d", &number);

    printf("Enter nth bit to set (0-31):");
    scanf("%d", &input);

    NewNumber = (1 << input) | number;

    printf("Bit set Successfully. \n\n");
    printf("Number before setting %d bit: %d (in decimal)\n", input, number);
    printf("Number after setting %d bit:%d(in decimal)\n", input, NewNumber);
    return 0;
}
