/**
 * C program to print square star pattern
 */

#include<stdio.h>
int main()
{
    int input, iteration_loop, reverse_loop;
    printf("Enter the number of rows\n:");
    scanf("%d",&input);

    for(iteration_loop = 1; iteration_loop <=input;iteration_loop++)
    {
        for(reverse_loop = 1 ; reverse_loop<=input;reverse_loop++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}