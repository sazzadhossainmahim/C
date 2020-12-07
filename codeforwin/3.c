// Write a C program to input two numbers and perform all arithmetic operations. How to perform all arithmetic operation between two numbers in C programming. C program to find sum, difference, product,
// quotient and modulus of two given numbers.

//  Example
// Input

// First number: 10
// Second number: 5

// Output

// Sum = 15
// Difference = 5
// Product = 50
// Quotient = 2
// Modulus = 0


// 07-12-2020

#include <stdio.h>

int main()
{
    int FirstNumber, SecondNumber;
    int Sum, Sub, Mul, Mod;
    float Div;

    printf("Enter any Two Numbers:");
    scanf("%d%d", &FirstNumber, &SecondNumber);

    Sum = FirstNumber + SecondNumber;
    Sub = FirstNumber - SecondNumber;
    Mul = FirstNumber * SecondNumber;
    Div = (float)FirstNumber / SecondNumber;
    Mod = FirstNumber % SecondNumber;

    printf("Sum = %d\n", Sum);
    printf("Difference = %d\n", Sub);
    printf("Product = %d\n", Mul);
    printf("Quotient = %f\n", Div);
    printf("Modulus = %d", Mod);
    return 0 ;
}