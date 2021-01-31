#include <stdio.h>
#define Max_Size 1000

int main()
{
    int arr[Max_Size];
    int input, iteration;

    printf("Enter array size\n:");
    scanf("%d", &input);

    printf("Enter %d elements in the array:", input);

    for (iteration = 0; iteration < input; iteration++)
    {
        scanf("%d", &arr[iteration]);
    }
    printf("\n Elements in array are:");
    for (iteration = 0; iteration < input; iteration++)
    {
        printf("%d, ", arr[iteration]);
    }
    return 0;
}