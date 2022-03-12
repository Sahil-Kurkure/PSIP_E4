/* Ackerman’s function is defined by:
A(m,n) = n+1 ; if m=0
A(m,n) = A(m-1,1) ; if m>0 and n=0
A(m,n) = A(m-1, A(m,n-1)) ; if m>0 and n>0

Write a function which given m and n returns A(m,n). Tabulate the values of A(m,n) for all
m in the range 1 to 3 and all n in the range 1 to 10.*/

#include <stdio.h>

int func(int m,int n);
void main()
{
    int i1,i2;

    for (i1=1;i1<=4;i1++)  //m is i1
    {
        for (i2=1;i2<=10;i2++)  // n is i2
        {   
            printf("A(%d,%d)=%d \n",i1,i2,func(i1,i2));
            printf("-----------------------\n");
        }
    }
}

int func(int m,int n) 
{
    if (m==0)
        return n+1;
    
    if (m>0 && n==0)
        return func(m-1,1);
    
    if (m>0 && n>0)
        return func(m-1,func(m,n-1));
}

