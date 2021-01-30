/**
 * C program to print hollow square star pattern
 */

#include <stdio.h>
int main()
{
    int input, iteration, reverse_loop;
    printf("Enter Number of rows\n:");
    scanf("%d", &input);

    for (iteration = 1; iteration <= input; iteration++)
    {
        for (reverse_loop = 1; reverse_loop <= input; reverse_loop++)
        {
            if (iteration == 1 || iteration == input || reverse_loop == 1 || reverse_loop == input)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}