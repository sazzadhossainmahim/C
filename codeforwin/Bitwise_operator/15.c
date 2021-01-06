#include <stdio.h>

int main()
{
    int number1, number2;
    printf("Enter any Two Number:");
    scanf("%d%d", &number1, &number2);

    printf("Original value of Number 1 = %d\n", number1);
    printf("Orginal value of Number 2 = %d\n", number2);

    number1 ^= number2;
    number2 ^= number1;
    number1 ^= number2;

    printf("Number after swapping = %d\n", number1);
    printf("Number after swapping = %d\n", number2);

    return 0;
}