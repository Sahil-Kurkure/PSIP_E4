#include <stdio.h>

int mobius(int x);
int check(int y);
void main()
{  
    int A,B;

    printf("Enter a number : ");
    scanf("%d",&A);
    B = mobius(A);
    printf("Mobius Functions M(N) at N = %d is : %d",A,B);
}

int mobius(int x)
{   
    int i,count=0;

    for(i=2;i<=x;i++)
    {
        if(check(i))
        {   
            if (x%i==0)
            {
                if (x%(i*i)==0)
                {
                    return 0;
                } 
                count++;
            }
        }
    }
    if (count%2==0)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int check(int y)
{
    int i2;

    for (i2=2;i2*i2<=y;i2++)
    {
        if (y%i2==0)
        {
            return 0;
        }
    }
    return 1;
}

