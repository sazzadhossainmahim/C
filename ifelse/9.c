#include<stdio.h>

int main()
{
    char input;
    printf("Enter any charecter:");
    scanf("%c",&input);

    if((input >='a' && input<='z')|| (input>='A' && input<='Z'))
    {
        printf("'%c'is alphabet",input);

    }
    else if(input>='0'&&input<='9')
    {
        printf("'%c' is digit",input);

    }
    else
    {
        printf("'%c' is special charecter.",input);
    }
    return 0;   
}
