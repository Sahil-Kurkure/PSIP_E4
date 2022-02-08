#include <stdio.h>

int check(int x);
void main()
{
    int A,B,i,count=0;

    printf("Enter the first number of range : ");
    scanf("%d",&A);
    printf("Enter the second number of range : ");
    scanf("%d",&B);

    for (i=A;i<=B;i++)
    {
        if (i%10==0)
        {
            printf("%d \n",i);
        }
        else if (check(i)!=1)
        {
            printf("%d ",i);
        }
        else
        {
            printf("%d* ",i);
            count++;            
        }       
    }
    printf("%d",count);
}

int check(int x)
{
    int a;

    if (x==1)
    {
        return 0;
    }

    for (a=2;a<x;a++)
    {
        if (x%a==0)
        {
        return 0;
        }
    }
    return 1; 
}