/**
 * C program to check whether a triangle is Equilateral, Isosceles or Scalene
 */
#include<stdio.h>
int main()
{
    int side_1,side_2,side_3;
    printf("Enter Three sides of Triangle\n:");
    scanf("%d%d%d",&side_1,&side_2,&side_3);

    if(side_1==side_2 || side_1 == side_3 || side_2 == side_3)
    {
        printf("Equilateral Triangle");
    }
    else if(side_1==side_2|| side_1==side_3|| side_2==side_3)
    {
        printf("Isosceles triangle.");
    }
    else 
    {
        printf("Scalene Triangle.");
    }
    return 0;
}
