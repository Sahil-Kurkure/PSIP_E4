/*Write a recursive function to find the factorial of a number and test it.*/

#include <stdio.h>

int fact(int x);
void main()
{
   int A;

   printf("Enter a number : ");
   scanf("%d",&A);

   printf("The factorial of the number %d is : %d",A,fact(A));
}

int fact(int x)
{
    if (x==0 || x==1)
        return 1;
    else
        return x*fact(x-1);
}
