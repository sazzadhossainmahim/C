#include<stdio.h>
int main(){
    int year;
    printf("Enter any Number:");
    scanf("%d",&year);

    if(((year%4==0)&& (year%100!=0))|| (year%400==0))
    {
        printf("LEAP Year\n");
    }
    else
    {
        printf("Common Year\n");
    }
    return 0 ;
}