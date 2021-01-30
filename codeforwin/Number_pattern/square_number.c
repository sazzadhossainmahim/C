/**
 * C program to print square number pattern
 */
#include <stdio.h>
int main()
{
    int input_rows, input_columns, iteration_loop, opposite_loop;
    printf("Enter number of rows\n:");
    scanf("%d", &input_rows);
    printf("Enter Number of Columns\n:");
    scanf("%d", &input_columns);

    for (iteration_loop = 1; iteration_loop <= input_rows; iteration_loop++)
    {
        for (opposite_loop = 1; opposite_loop <= input_columns; opposite_loop++)
        {
            printf("1");
        }
        printf("\n");
        }

    return 0;
}