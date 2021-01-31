#include <stdio.h>
#define Max_size 100
int main()
{
    int arr[Max_size];
    int input, iteration;

    printf("Enter size of the array:");
    scanf("%d", &input);

    printf("Enter %d element in array\n"),input;
    for (iteration = 1; iteration < input; iteration++)
    {
        printf("\nEnter %d element in array:",iteration+1);
        scanf("%d", &arr[iteration]);
    }


    printf("\n All negative elements in array are:");
    for (iteration = 0; iteration < input; iteration++)
    {
        if (arr[iteration] < 0)
        {
            printf(" %d", arr);
        }

    }
    return 0;
}