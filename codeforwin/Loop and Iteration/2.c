#include<stdio.h>

int main()
{
    int loop, input;
    
    printf("Enter starting value:");
    scanf("%d",&input);

    for(loop=input;loop>1;loop--)
    {
        printf("%d\n",loop);
    }
    return 0;


}