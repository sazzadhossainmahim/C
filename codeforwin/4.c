// Write a C program to input length and width of a rectangle and calculate perimeter of the rectangle. How to find perimeter of a rectangle in C programming. Logic to find the perimeter of a rectangle if length and width are given in C programming.
// Example
// Input

// Enter length: 5
// Enter width: 10

// Output

// Perimeter of rectangle = 30 units

// 07-12-2020

#include <stdio.h>

int main()
{
    float length, width, perimeter;

    printf("Enter length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter width of the rectangle: ");
    scanf("%f", &width);
    perimeter = 2 * (length + width);
    printf("Perimeter of rectangle = %f units ", perimeter);
    return 0;
}