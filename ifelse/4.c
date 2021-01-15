/**
 * C program to check even or odd number
 */

#include<stdio.h>

int main ()
{
    int num;
    printf("Enter any number:\n");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("Number is Even");

    }
    else
    {
        {
            printf("Number is Odd\n");
        }
    }
    return 0;
    
}