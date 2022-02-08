#include <stdio.h>

void main()
{
  int hours,minutes,a;

 printf("Enter minutes : ");
 scanf("%d",&minutes);

 hours = minutes/60; 
 a = minutes%60;            //a is the the remainder of minutes reamining after converting to hours
 

 printf("\nTotal number of hours and minutes is : %d hours and %d minutes ",hours,a);
    
}