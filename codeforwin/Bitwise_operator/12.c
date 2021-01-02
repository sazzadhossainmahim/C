// Write a C program to input a number from user and count total number of ones (1s) and zeros (0s) in the given number using bitwise operator. How to count zeros and ones in a binary number using bitwise operator in C programming.

// Example

// Input

// Input any number: 22

// Output

// Output number of ones: 3
// Output number of zeros: 29


#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 /* Total number of bits in integer */

int main()
{
    int num, zeros, ones, i;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    zeros = 0;
    ones = 0;

    for(i=0; i<INT_SIZE; i++)
    {
        /* If LSB is set then increment ones otherwise zeros */
        if(num & 1)
            ones++;
        else
            zeros++;

        /* Right shift bits of num to one position */
        num >>= 1;
    }

    printf("Total zero bit is %d\n", zeros);
    printf("Total one bit is %d", ones);

    return 0;
}