// Write a C program to input principle, time and rate (P, T, R) from user and find Simple Interest. How to calculate simple interest in C programming. Logic to find simple interest in C program.
// Example
// Input

// Enter principle: 1200
// Enter time: 2
// Enter rate: 5.4

// Output

// Simple Interest = 129.600006


// 13-12-20

#include<stdio.h>

int main()
{
    float principle, time, rate, SI;
    printf("Enter principle (amount):");
    scanf("%f",&principle);

    printf("Enter time:");
    scanf("%f",&time);

    printf("Enter rate:");
    scanf("%f",&rate);

    SI = (principle * time * rate) /100;
    printf("Simple Interest = %f",SI);
    return 0;
}