
#include <stdio.h>
#define INT_SIZE sizeof(int) * 8 /* Integer size in bits */

int main()
{
    int num, order = -1, i;

    /* Input number from user */
    printf("Enter any number: ");
    scanf("%d", &num);

    /* Iterate over each bit of integer */
    for(i=0; i<INT_SIZE; i++)
    {
        /* If current bit is set */
        if((num>>i) & 1)
            order = i;
    }

    if (order != -1)
        printf("Highest order set bit in %d is %d", num, order);
    else 
        printf("0 has no set bits.");

    return 0;
}