//C program to check whether a number is positive, negative or zero


#include<stdio.h>
int main(){
    int num;
    printf("Enter any number:");
    scanf("%d",&num);

    if(num>0)
    {
        printf("Number is Positive\n");
    }
    if(num<0)
    {
        printf("Number is Negetive\n");

    }
    if(num == 0)
    {
        printf("Number is Zero\n");
    }
    return 0 ;

}
