// C program to print day of week name using switch case

#include <stdio.h>
int main()
{
    int week;

    printf("Enter week number(1-7):");

    scanf("%d", &week);

    switch (week)
    {
    case /* constant-expression */ 1:
        /* code */
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;

    case 3:
        printf("Wednesday");
        break;

    case 4:
        printf("Thrusday");
        break;

    case 5:
        printf("Friday");
        break;

    case 6:
        printf("Saterday");
        break;

    case 7:
        printf("Sunday");
        break;

    default:
        printf("Invaild input!Please enter week number between 1-7.");
    }
    return 0;
}