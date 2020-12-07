// C program to find area of a rectangle

// Write a C program to input length and width of a rectangle and find area of the given rectangle. How to calculate area of a rectangle in C programming. Logic to find area of a rectangle whose length and width are given in C programming.

// Example
// Input

// Enter length: 5
// Enter width: 10

// Output

// Area of rectangle = 50 sq. units

// 07-12-2020

#include <stdio.h>

int main()
{
    float length, width, area;
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%d", &width);

    area = length * width;
    printf("Area of rectangle = %f sq. units ", area);

    return 0;
}