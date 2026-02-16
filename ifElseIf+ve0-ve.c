/*Write a program that uses `if-else if` conditions to classify a user-provided number as "Positive"
 (greater than 0), "Negative" (less than 0), or "Zero" (equal to 0) */

 #include<stdio.h>
 void main()
 {
     int number;

     printf("enter a number");
     scanf("%d",&number);

     if (number>0)
     {
         printf("Positive");


     }
     else if (number<0)
     {
         printf("Negative");
     }

     else
     {
         printf("Zero");
     }


 }
