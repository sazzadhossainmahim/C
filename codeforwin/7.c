// C program to convert centimeter to meter and kilometer
// Write a C program to input length in centimeter and convert it to meter and kilometer. How to convert length from centimeter to meter and kilometer in C programming. Length conversion program in C from centimeter to meter and centimeter to kilometer.
// Example
// Input

// Enter length in centimeter = 1000

// Output

// Length in meter = 10 m
// Length in kilometer = 0.01 km


// 09-12-20

//  1m = 100cm , 1km=100000cm

#include<stdio.h>
int main()
{
    float cm, meter,km;
    printf("Enter the length in centimeter:");
    scanf("%f",&cm);
    meter = cm / 100.0;
    km = cm /  10000.0;

    printf("Length in Meter = %.2f m \n",meter);
    printf("Length in kilometer = %.2f km",km);

    return 0;
}