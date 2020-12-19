// Write a C program to input any number from user and toggle or invert or flip nth bit of the given number using bitwise operator. How to toggle nth bit of a given number using bitwise operator in C programming. C program set nth bit of a given number if it is unset otherwise unset if it is set.

// Example

// Input

// Input number: 22
// Input nth bit to toggle: 1

// Output

// After toggling nth bit: 20 (in decimal
// 19-12-20

#include<stdio.h>

int main()
{
    int number,input,newNum;
    printf("Enter any number:");
    scanf("%d",&number);

    printf("Enter the nth bit to toggle (0-31):");
    scanf("%d",&input);

    newNum = number ^ ( 1 << input);
    printf("Bit toggled successfully. \n\n");
    printf("Number before toggling %d bit: %d (in decimal)\n",input,number);
    printf("Number after toggling %d bit: %d (in decimal)\n",input,newNum);
    return 0;
}