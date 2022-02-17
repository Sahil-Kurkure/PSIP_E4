#include <stdio.h>

int check(int x);
void main()
{
    int A,B,i,count=0;

    printf("Enter the first number of range : ");
    scanf("%d",&A);
    printf("Enter the second number of range : ");
    scanf("%d",&B);

    for (i=A;i<=B;i++)          //for checking the numbers between A and B
    {
        if (i%10==0)            // just to present neatly
        {
            printf("%d \n",i);
        }
        else if (check(i)!=1)   //if the check funtions returns 1 then its means i is not a prime number
        {
            printf("%d ",i);
        }
        else                    //if check funtion returns 0 it means i is a prime number
        {
            printf("%d* ",i);
            count++;            //just for checking           
        }       
    }
    printf("%d",count);
}

int check(int x)                //this fucntion will check if the inputed number is prime or not
{
    int a;

    if (x==1)
    {
        return 0;           // means not a prime number
    }

    for (a=2;a<x;a++)
    {
        if (x%a==0)      //if x is divisble by any number before itself then it will not be prime   
        {
        return 0;       // means not a prime number
        }
    }
    return 1;           //means a prime number
}