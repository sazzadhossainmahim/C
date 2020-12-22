// Write a C program to input any number from user and find lowest order set bit of given number using bitwise operator. How to find first set bit in a given number using bitwise operator in C programming. Logic to get first set bit of a number using C program.

// Example

// Input

// Input any number: 22

// Output

// First set bit: 1
// 22-12-20

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8

int main()
{
    int num, order, i;
    printf("Enter any number:");
    scanf("%d", &num);

    order = INT_SIZE - 1;
    for (i = 0; i < INT_SIZE; i++)
    {
        if((num >>i) & 1)
        {
            order = 1;
            break;
        }
    }
    printf("Lowest order set bit in %d is %d",num,order);
    return 0 ;
}