/**
 * C program to find cube of any number using function
 */

#include<stdio.h>

double cube(double number);
int main()
{
    int number;
    double count;

    printf("Enter any number\n:");
    scanf("%d",&number);

    count = cube(number);

    printf("Cube of %d is %.2f",number,count);
    return 0;
}

double cube(double number)
{
    return(number * number * number);

}