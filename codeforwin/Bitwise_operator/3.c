// Write a C program to input any number from user and check whether nth bit of the given number is set (1) or not (0). How to check whether nth bit of a given number is set or unset using bitwise operator in C programming. C program to get the status of nth bit of a number.

// Example

// Input

// Input number: 12
// Input nth bit number: 2

// Output

// 2 bit of 12 is set (1)
// 16-12-20

#include<stdio.h>
int main()
{
    int num, n, bitStatus;
    
    
    printf("Enter any number:");
    scanf("%d",&num);

    printf("Enter nth bit to check (0-31):");
    scanf("%d",&n);

    bitStatus = (num >> n) & 1;

    printf("The %d is set to %d", n, bitStatus);

    return 0 ;
}