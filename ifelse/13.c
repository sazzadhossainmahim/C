//Program to count minimum number of denomination for given amount

#include <stdio.h>
int main()
{
    int amount;
    int note_500, note_100, note_50, note_20, note_10, note_5, note_2, note_1;
    note_500, note_100, note_50, note_20, note_10, note_5, note_2, note_1 = 0;

    printf("Enter amount:\n");
    scanf("%d", &amount);

    if (amount >= 500)
    {
        note_500 = amount / 500;
        amount -= note_500 * 500;
    }
    if (amount >= 100)
    {
        note_100 = amount / 100;
        amount -= note_100 * 100;
    }
    if (amount >= 50)
    {
        note_50 = amount / 100;
        amount -= note_50 * 50;
    }
    if (amount >= 20)
    {
        note_20 = amount / 20;
        amount -= note_20 * 20;
    }
    if(amount >= 5)
    {
        note_5 = amount / 5;
        amount -= note_5 * 5;
    }
    if(amount >= 2)
    {
        note_2 = amount /2;
        amount -= note_2 * 2;
    }
    if(amount >=1)
    {
        note_1 = amount;
    }
    printf("Total number of notes = \n");
    printf("500 = %d\n",note_500);
    printf("100 = %d\n",note_100);
    printf("50 = %d\n",note_50);
    printf("20 = %d\n",note_20);
    printf("5 = %d\n",note_5);
    printf("2 = %d\n",note_2);
    printf("1 = %d\n",note_1);
    return 0;
}