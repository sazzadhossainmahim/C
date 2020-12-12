// C program to find area of an equilateral triangle
// Write a C program to input side of an equilateral triangle from user and find area of the given triangle. How to find area of an equilateral triangle in C programming. C program to calculate area of an equilateral triangle if its side is given.
// Example

// Input

// Enter side of the equilateral triangle: 10

// Output

// Area of equilateral triangle = 43.3 sq. units


// 12-12-20

#include<stdio.h>
#include<math.h>

int main()
{
    float side, area;

    printf("Enter side of an equilateral triangle:");

    scanf("%f",&side);

    area = (sqrt(3) / 4) * (side * side);
    printf("Area of equilateral triangle = %.2f sq. units",area);
    return 0 ;
}