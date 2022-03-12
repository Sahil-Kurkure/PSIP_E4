/*Write a C program to convert days into year, month and days.*/

#include<stdio.h>

void main()
{
   int days,years,months,weeks,a,b,c;

   printf("How do you describe your age in days : ");
   scanf("%d",&days);

   years=days/365;
   a = days%365;        //a is the the number of days reamining after converting to years
   months=a/30;
   b = a%30;            //b is the the number of days reamining after converting to months
   weeks = b/7;
   c = b%7;
   

   printf("\nYour age is %d years, %d months, %d weeks, %d days",years,months,weeks,c);

}
