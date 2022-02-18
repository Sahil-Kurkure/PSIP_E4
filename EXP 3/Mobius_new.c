#include <stdio.h>
#include <math.h>

int mobius(int x);
int check(int y);
void main()
{
    int A, B;

    printf("Enter a number : ");
    scanf("%d", &A);
    B = mobius(A);
    printf("\nMobius Functions M(N) at N = %d is : %d", A, B);
}

int mobius(int x)           
{
    int i, count = 0,count1=1,temp,count2;

    printf("The prime factors of %d are : ",x);
    for (i = 2; i <= x; i++)    //this will give all the numbers between 2 and x
    {   
        if (check(i))           //this is give all the prime numbers between 2 and x for each iteration
        {                       //now we have all the prime numbers between 2 and x.
            if (x % i == 0)     //this will give us the prime factors of x.
            {   
                count2=1;
                printf("%d,",i);
                for(int n=2;n<x;n++)        //for the power of i
                {   
                    int p = pow(i,n);       //seted for i^n i.e i^2 or i^3 or i^4...
                    if (x % p == 0)       //if any prime factor of x is repeated then
                    {   
                        temp=i;  
                        printf("%d,",i);
                        count1++;
                        count2++;
                    }
                }
                count++;                    //this will count the number the of prime factors of x
            }
        }
    }
    if (count1!=1)
    {   
        if (count2==1)
        {
            printf("\nSince the prime factor %d occur more than once (%d times) thus ",temp,count1);
            return 0;
        }
        if(count2!=1)
        {
            printf("\nSince the prime factor %d occurs more than once (%d times) thus ",temp,count2);
            return 0;            
        }

    }
    if (count % 2 == 0)             // if the number of prime facotors are even
    {
        printf("\nSince the number of prime factors of %d are %d which is even thus",x,count);
        return 1;                       //it will return 1 (funtion defination)
    }
    else                            // if the number of prime facotors are odd
    {
        printf("\nSince the number of prime factors of %d are %d which is odd thus",x,count);
        return -1;                      //it will return -1 (funtion defination)
    }
}

int check(int y)           //this function will check if the inputed number is prime or not
{
    int i2;

    for (i2=2; i2*i2<=y; i2++)
    {
        if (y % i2 == 0)
        {
            return 0;           //not a prime number
        }
    }
    return 1;           //is a prime number
}
