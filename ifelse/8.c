//Logic to check vowels or consonants

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter any charecter:");
    scanf("%c", &ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )
    {
        printf("%c is Vowel.");
    }
    else if ((ch >= 'a' && ch <= 'z'))
    {
        printf("%c is Consonent", ch);
    }
    else
    {
        printf("%c is not an alphabet", ch);
    }
    return 0;
}