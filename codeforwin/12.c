// C program to find square root of a number
// Write a C program to input a number and find square root of the given number. How to find square root of a number in C programming using inbuilt sqrt() function. How to use predefined sqrt() function to find square root in C program.
// Example
// Input

// Enter any number: 9

// Output

// Square root of 9 = 3

#include<stdio.h>
#include<math.h>

int main()
{
    double num,root;
    printf("Enter any number to find square root:");
    scanf("%lf",&num);

    root = sqrt(num);

    printf("Square root of %.2lf = %.2lf",num,root);

    return 0;


}
