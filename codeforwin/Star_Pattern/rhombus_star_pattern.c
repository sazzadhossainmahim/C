#include<stdio.h>
int main()
{
    int starting_nood, ending_nood, input;

    printf("Enter Rows\n:");
    scanf("%d",&input);

    for(starting_nood=1;starting_nood<=input;starting_nood++)
    {
        for(ending_nood=1;ending_nood<=input - starting_nood;ending_nood++)
        {
            printf(" ");
        }
        for(ending_nood=1;ending_nood<=input;ending_nood++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}