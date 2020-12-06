// Write a C program to input two numbers from user and calculate their sum.
//  C program to add two numbers and display their sum as output.
//  How to add two numbers in C programming.

// Example
// Input

// Input first number: 20
// Input second number: 10

// Output

// Sum = 30

#include <stdio.h>

int main()
{
    int number_1, number_2, sum;

    printf("Enter First Number: ");
    scanf("%d", &number_1);
    printf("Enter Second Number:");
    scanf("%d", &number_2);

    sum = number_1 + number_2;

    printf("Sum of %d and %d = %d\n12",number_1,number_2,sum);

    return 0;
}