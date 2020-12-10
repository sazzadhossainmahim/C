// C program to find power of a number using pow function
// Write a C program to input two numbers from user and find their power using pow() function. How to find power of a number in C programming. How to use pow() function in C programming.
// Example
// Input

// Enter base: 5
// Enter exponent: 2

// Output

// 5 ^ 2 = 25
// 10-12-20

#include<stdio.h>
#include<math.h>

int main()
{
    double base, expo, power;
    printf("Enter Base:");
    scanf("%lf",&base);
    printf("Enter Exponent:");
    scanf("%lf",&expo);

    power = pow(base,expo);
    printf("%.2lf ^ %.2lf = %.2lf", base, expo,power);
    return 0;
}