// Write a C program to input any number from user and clear the nth bit of the given number using bitwise operator. How to clear nth bit of a given number using bitwise operator in C programming. How to unset (0) the value of nth bit of a given number in C.

// Example

// Input

// Input number: 13
// Input nth bit to clear: 0

// Output

// Number after clearing nth bit: 12 (in decimal)
// 18-12-20
#include <stdio.h>

int main()
{
    int num, n, newNum;
    printf("Enter any number:");
    scanf("%d", &num);

    printf("Enter nth bit to clear(0-31):");
    scanf("%d", &n);

    newNum = num & (~(1 << n));

    printf("Bit cleared successfully.\n\n");
    printf("Number before clearing %d bit: %d (in decimal)\n", n, num);
    printf("Number after clearing %d bit: %d (in decimal)\n", n, newNum);

    return 0;
}