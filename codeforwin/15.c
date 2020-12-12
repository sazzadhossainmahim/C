// Write a C program to input base and height of a triangle and find area of the given triangle. How to find area of a triangle in C programming. Logic to find area of a triangle in C program.
// Example
// Input

// Enter base of the triangle: 10
// Enter height of the triangle: 15

// Output

// Area of the triangle = 75 sq. units

// 12-12-20

#include<stdio.h>

int main()
{
    float base, height, area;
    printf("Enter base of the Triangle:");
    scanf("%f", &base);
    printf("Enter the height of the Triangle");
    scanf("%f",&height);

    area = (base * height) / 2;
    printf("Area of the triangle = %.2f sq. units",area);
    return 0 ;
}