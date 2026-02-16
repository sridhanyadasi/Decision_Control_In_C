/*Write a program to use `if-else if` conditions to determine whether a student's exam score falls
into one of the following categories: "Excellent" (score >= 90),
"Good" (score >= 75), "Pass" (score >= 60), or "Fail" (score < 60) */

#include<stdio.h>
void main()
{
    int score =90;

    if(score >=90)
    {
      printf("Excellent");
    }
    else if(score >=75)
    {
        printf("Good");
    }
    else if (score >=60)
    {
        printf("Pass");
    }
    else if (score <60)

    {
      printf("Fail");
    }



}


