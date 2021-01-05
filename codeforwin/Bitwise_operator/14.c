// Write a C program to input any decimal number from user and convert it to binary number system using bitwise operator. How to convert from decimal number system to binary number system using bitwise operator in C programming. Logic to convert decimal to binary using bitwise operator in C program.

// Example

// Input

// Input any number: 22

// Output

// Binary number: 00000000000000000000000000010110

//data 05-01-2021

#include <stdio.h>
#define INT_SIZE sizeof(int) * 8
int main()
{
    int Number;
    int Index;
    int loop;
    int Bin[INT_SIZE];

    printf("Enter any Number:");
    scanf("%d", &Number);

    Index = INT_SIZE  -1;

    while (Index >=0)
    {
        /* code */
        Bin[Index] = Number & 1;
        Index--;
        Number >>= 1 ;
    }
    printf("Converted Binary: \n");
    for(loop = 0;loop<INT_SIZE;loop++)
    {
        printf("%d",Bin[loop]);

    }
    return 0;


    
}