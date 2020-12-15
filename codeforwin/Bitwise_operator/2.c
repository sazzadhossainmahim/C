// Write a C program to input any number from user and check whether Most Significant Bit (MSB) of given number is set (1) or not (0). How to check whether Most Significant Bit of any given number is set or not using bitwise operator in C programming. C program to get the status of the most significant bit of a number.

// Example

// Input

// Input number: -1

// Output

// Most Significant Bit (MSB) of -1 is set (1).

// 15-12-20


#include<stdio.h>
#define BITS sizeof(int) * 8
int main()
{
    int number , most_significate_bit;

    printf("Enter any number:\n");
    scanf("%d",&number);

    most_significate_bit = 1 << (BITS -1);
    
    if(number & most_significate_bit){
        printf("MSB of %d is set(1).",number);

    }
    else
    {
        printf("MSB of %d is unser (0).",number);
    }
    return 0;
    
}



