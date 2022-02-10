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

