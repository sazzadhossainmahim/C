/**
 * C program to check whether a character is uppercase or lowercase 
 */

#include<stdio.h>
int main()
{
    char input;
    printf("Enter any charecter:");
    scanf("%c",&input);

    if(input>='A'|| input<='Z')
    {
        printf("'%c' is Uppercase alphabet:",input);
    }
    else if (input>='a'||input<='z')
    {
        printf("'%c' is Lowercase Alphabet.",input);
    }
    else
    {
        printf("'%c' is not alphabet",input);
    }

    return 0;
    
    
}