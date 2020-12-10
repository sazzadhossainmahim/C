// C program to convert temperature from degree fahrenheit to celsius
// Write a C program to input temperature in degree Fahrenheit and convert it to degree Centigrade. How to convert temperature from Fahrenheit to Celsius in C programming. C program for temperature conversion. Logic to convert temperature from Fahrenheit to Celsius in C program.
// Example
// Input

// Temperature in fahrenheit = 205

// Output

// Temperature in celsius = 96.11 C

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    /* Input temperature in fahrenheit */
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    /* Fahrenheit to celsius conversion formula */
    celsius = (fahrenheit - 32) * 5 / 9;

    /* Print the value of celsius */
    printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);

    return 0;
}
