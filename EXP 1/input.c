/*Write a C program to input 2 numbers. Perform addition, subtraction, multiplication, division and modulus and display output.*/

#include <stdio.h>

void main()
{

 int a,b,c;
 

 printf("Enter value of a : ");
 scanf("%d",&a);

 printf("Enter value of b : ");
 scanf("%d",&b);

 c = a+b;
 printf("a+b = %d \n",c);

 c = a-b;
 printf("a-b = %d \n",c);

  c = a*b;
 printf("a*b = %d \n",c);

  c = a/b;
 printf("a/b = %d \n",c);

  c = a%b;
 printf("Remainder when a divided by b = %d \n",c);

}
