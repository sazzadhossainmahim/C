// Logic to find day of week

#include<stdio.h>

int main()
{
    int week;
    printf("Enter week number(1-7):");
    scanf("%d",&week);
    if(week ==1){
        printf("Monday");
    }
    else if (week ==2)
    {
        /* code */
        printf("Tuesday.");
    }
    else if (week == 3)
    {
        /* code */
        printf("Wednesday");
    }
    else if (week == 4)
    {
        printf("Thrusday.");
    }
    else if(week == 5)
    {
        printf("Friday.");
    }
    else if(week==6)
    {
        printf("Saterday.");
    }
    else if(week==7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid input!");
    }
    
    return 0;
    
    
    
}