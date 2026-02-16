/*Develop a program that takes an integer input from the user and
checks if it is an even number, odd number, or zero using `if-else if` conditions. */

#include<stdio.h>
void main()
{
    int number;


    printf("enter a  number\n");
    scanf("%d",&number);

    if (number==0)
    {
        printf("zero");
    }
    else if (number%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}
