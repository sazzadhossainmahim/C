/**
 * C program to check whether a character is alphabet or not
 */

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any charecter:\n");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch>='A'&& ch<='Z'))
        {
            printf("Charecter is an Alphabet\n");
        }
    else
    {
        printf("charecter is Not Alphabet");
    }
    return 0;
}