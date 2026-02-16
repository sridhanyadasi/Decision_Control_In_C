/*Write a program to use `if-else if` conditions to determine the day of the week based on
a user-inputted number (1 for Sunday, 2 for Monday, and so on).
 Additionally, handle the case if the user enters a number outside the valid range */

 #include<stdio.h>
 void main()
 {
      int days;

     printf("enter days\n");
     scanf("%d",&days);

     if (days==1)
     {
         printf("Sunday");
     }
     else if (days==2)
     {
         printf("Monday");
     }
     else if (days==3)
     {
         printf("Tuesday");
     }
      else if (days==4)
     {
         printf("Wednesday");
     }
     else if (days==5)
     {
         printf("Thursday");
     }
      else if (days==6)
     {
         printf("Friday");
     }
     else if (days==7)
     {
         printf("Saturday");
     }
 }
