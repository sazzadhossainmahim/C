#include<stdio.h>

int main()
{
    int loop, input;

    printf("Enter any Number:");
    scanf("%d",&input);

    printf("Natural Numbers from 1 to %d : \n",input);

    for(loop=1;loop<=input;loop++)
    {
        printf("%d\n",loop);
    }
    return 0;
}
