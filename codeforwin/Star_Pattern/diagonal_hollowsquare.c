#include <stdio.h>
int main()
{
    int input, initial_iteration, opposite_iteration;

    printf("Enter Number of Rows\n:");
    scanf("%d", &input);

    for (initial_iteration = 1; initial_iteration <= input; initial_iteration++)
    {
        for (opposite_iteration = 1; opposite_iteration <= input; opposite_iteration++)
        {
            if (initial_iteration == 1 || initial_iteration == input || opposite_iteration == 1 || opposite_iteration == input || initial_iteration == opposite_iteration || opposite_iteration == (input - initial_iteration + 1))
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