/**
 * C program to check vowel or consonant using switch case
 */

#include <stdio.h>
int main()
{
    char c;
    printf("Enter any alphabet:");
    scanf("%c", &c);

    switch (c)
        {
        case 'a':
            printf("Vowel");
            break;
        case 'e':
            printf("Vowel");
            break;
        case 'i':
            printf("Vowel");
            break;
        case 'o':
            printf("Vowel");
            break;
        case 'u':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
        }
        return 0;
}