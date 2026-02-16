/*.Develop a program that uses `if-else if` conditions to categorize a user's age into different groups, such as "Child" (0-12 years),
 "Teenager" (13-19 years), "Adult" (20-59 years), and "Senior" (60+ years) */

 #include<stdio.h>
 void main()
 {
     int age;

     printf("enter age");
     scanf("%d",&age);

     if (age<=12)
     {
         printf("Child");
     }
     else if (age<=19)
     {
         printf("Teenager");
     }
     else if (age<=59)
     {
         printf("Adult");
     }
     else
     {
         printf("Senior");
     }
 }
