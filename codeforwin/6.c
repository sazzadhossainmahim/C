// Write a C program to input radius of a circle from user and find diameter, circumference and area of the circle. How to calculate diameter, circumference and area of a circle whose radius is given by user in C programming. Logic to find diameter, circumference and area of a circle in C.
// Example
// Input

// Enter radius: 10

// Output

// Diameter = 20 units
// Circumference = 62.79 units
// Area = 314 sq. units

// 09-12-20
#include<stdio.h>

int main()
{
    float diameter, circumference, area,radius;
    printf("Enter radius of circle:");
    scanf("%f", &radius);

    diameter = 2 * radius;
    circumference = 2 * 3.1416 * radius;
    area = 3.1416 * (radius * radius);

    printf("Diameter of circle = %.2f units \n",diameter);
    printf("Circumference of circle = %.2f units \n", circumference);
    printf("Area of circle = %.2f sq.units",area);

    return 0;
}