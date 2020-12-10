// C program to convert days to years weeks and days
// Write a C program to input number of days from user and convert it to years, weeks and days. How to convert days to years, weeks in C programming. Logic to convert days to years, weeks and days in C program.
// Example
// Input

// Enter days: 373

// Output

// 373 days = 1 year/s, 1 week/s and 1 day/s

// 10-12-20

#include<stdio.h>
int main()
{
    int days, years,weeks;
    printf("Enter Days:");
    scanf("%d",&days);

    years = (days / 365 );
    weeks = ( days % 365) / 7;
    days = days - ((years * 365) + (weeks * 7));

    printf("Years: %d\n",years);
    printf("Weeks: %d\n",weeks);
    printf("Days: %d",days);

    return 0 ;

}