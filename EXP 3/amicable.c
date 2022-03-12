/* Write a function which takes as parameters two positive integers and returns TRUE if the numbers are amicable and FALSE otherwise.
A pair of numbers is said to be amicable if the sum of divisors of each of the numbers (excluding the no. itself) is equal to the other number.
Ex. 1184 and 1210 are amicable. */

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
    printf("---------------------------------------\n");

    d = divide(A);
    if (d==B)                   //check that the sum of sivisors of A is equal to B or not
    {
        P=1;
    }
    printf("\n");
    d = divide(B);              
    if (d==A)                   //check that the sum of sivisors of B is equal to A or not
    {  
        Q=1;
    }

    if (P==1 && Q==1)
    {
        printf("\nTRUE,the numbers (%d,%d) are amicable",A,B);
    }
    else
    {
        printf("\nFALSE,the numbers (%d,%d) are not amicable",A,B);
    }

}   


int divide(int x)
{
    int d=0,i;
    printf("The divisors of %d are --> ",x);

    for (i=1;i<x;i++)           //this will take all the numbers from 1 to x
    {
        if (x%i==0)             // this wiil check if the given number x is divisible by i for each loop
        {   
            printf("%d,",i);
            d = d+i;              // if the if condition satisfies the the value of i will be added to d for each loop
        }
    }
    printf("\nThe sum of divisors is : %d",d);
    printf("\n---------------------------------------");
    return d; 
}
