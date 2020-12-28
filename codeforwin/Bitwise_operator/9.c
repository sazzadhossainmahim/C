#include<stdio.h>

int main()
{
    int num, count=0;
    printf("Enter any number:");
    scanf("%d",&num);

    while (!(num & 1))
    {
        /* code */
        count ++;
        num >>= 1;
    }
    printf("Total numebr of trailing zeros = %d\n4",count);
    return 0;
    
}