// C program to check even or odd using bitwise operator
// date - 07-01-21

#include<stdio.h>
int main()
{
    int num;

    printf("Enter Any Number:");
    scanf("%d",&num);

    if(num & 1)
    {
        printf("%d is odd",num);
    }
    else
    {
         printf("%d is even",num);
    }
    return 0;
    

}