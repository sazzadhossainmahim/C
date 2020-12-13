// Write a C program to input principle (amount), time and rate (P, T, R) and find Compound Interest. How to calculate compound interest in C programming. Logic to calculate compound interest in C program.
// Example
// Input

// Enter principle (amount): 1200
// Enter time: 2
// Enter rate: 5.4

// Output

// Compound Interest = 1333.099243

// 13-12-20


#include<stdio.h>
#include<math.h>

int main()
{
    float principle,rate, time, CI;
    printf("Enter principle(amount):");
    scanf("%f",&principle);

    printf("Enter time:");
    scanf("%f",&time);
    printf("Enter rate:");
    scanf("%f",&rate);
    CI = principle * (pow((1+ rate/100),time));

    printf("Compound Interest = %f",CI);
    return 0;
    
}