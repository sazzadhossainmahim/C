#include<stdio.h>

int main()
{
    int number1, number2,max;
    printf("Enter two number:");
    scanf("%d%d",&number1,&number2);

    max = (number1 > number2) ? number1 : number2;
    printf("Maximum between %d and %d is %d", number1,number2,max);
    return 0;
}