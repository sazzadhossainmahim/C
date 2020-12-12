// Write a C program to input marks of five subjects of a student and calculate total, average and percentage of all subjects. How to calculate total, average and percentage in C programming. Logic to find total, average and percentage in C program.
// Example
// Input

// Enter marks of five subjects: 95 76 85 90 89

// Output

// Total = 435
// Average = 87
// Percentage = 87.00

#include<stdio.h>

int main()
{
    float eng,phy,chem,math,comp;
    float total,avg,per;
    printf("Enter the marks of the five subjects:\n");
    scanf("%f%f%f%f%f",&eng,&phy,&chem,&math,&comp);


    total =  eng + phy + chem + math + comp;
    avg  = total / 5.0;
    per = (total/ 500.0) * 100;

    printf("Total Marks = %.2f\n",total);
    printf("Average Marks = %.2f\n",avg);
    printf("Percentage = %.2f\n",per);
}