/*Write a program to find out whether a number is kaprekar or not. 
Consider an n-digit number k. Square it and add the right n digits to the left n or n-1 digits. 
If the resultant sum is k, then k is called a Kaprekar number.*/

#include <stdio.h>
#include <math.h>

void main()
{
    int A,count,B,power,L,R,Y;

    printf("Enter a number : ");
    scanf("%d",&A);

    B = pow(A,2);
    count = 1;
    Y = 0;

    while(B>0)
    {   
        power = pow(10,count);
        R = B%power;
        L = B/power;

        if (A==1)
        {
            Y = 1;
            break;
        }
        if (R==0||L==0)
        {
            break;
        }

        if ((R+L)==A)
        {
            Y = 1;
            break;
        }
        count++;
    }
    
    if (Y==1)
    {
        printf("%d is a Kaprekar Number",A);
    }
    if (Y==0)
    {
        printf("%d is not a Kaprekar Number",A);
    }
}



