#include <stdio.h>

int divide(int x);
int A,B,P,Q;
void main()
{   
    int d;
    printf("Enter the first positive integer : ");
    scanf("%d",&A);
    printf("Enter the second positive integer : ");
    scanf("%d",&B);

    d = divide(A);
    if (d==B)
    {
        P=1;
    }

    d = divide(B);
    if (d==A)
    {
        Q=1;
    }

    if (P==1 && Q==1)
    {
        printf("TRUE,the numbers (%d,%d) are amicable",A,B);
    }
    else
    {
        printf("FALSE,the numbers (%d,%d) are not amicable",A,B);
    }

}   


int divide(int x)
{
    int d=0,i2;

    for (i2=1;i2<x;i2++)
    {
        if (x%i2==0)
        {
            d = d+i2;
        }
    }
    return d; 
}