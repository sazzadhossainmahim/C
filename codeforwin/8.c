// Program to convert temperature from Celsius to Fahrenheit
// Write a C program to input temperature in Centigrade and convert to Fahrenheit. How to convert temperature from degree centigrade to degree Fahrenheit in C programming. Logic to convert temperature from Celsius to Fahrenheit in C.
// Example
// Input

// Enter temperature in Celsius = 100

// Output

// Temperature in Fahrenheit = 212 F

// 09-12-20
#include<stdio.h>
int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius:");
    scanf("%f",&celsius);

    fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f celsius = %.2f Fahrenheit",celsius,fahrenheit);
    return 0;

}