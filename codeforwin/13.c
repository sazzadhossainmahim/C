// C program to find angles of triangle if two angles are given
// Write a C Program to input two angles from user and find third angle of the triangle. How to find all angles of a triangle if two angles are given by user using C programming. C program to calculate the third angle of a triangle if two angles are given.
// ExampleInput

// Enter first angle: 60
// Enter second angle: 80

// Output

// Third angle = 40

#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter two angles of triangle:");
    scanf("%d%d",&a,&b);

    c= 180 - (a+b);

    printf("Third angle of the triangle = %d",c);
    return 0;
}