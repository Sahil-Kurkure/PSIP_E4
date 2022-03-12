/*Take two numbers as input and calculate their LCM and GCD (HCF).*/

#include <stdio.h>

void main()
{
    int a,b,lcm,hcf,i,max;

    printf("Enter first numbers : ");
    scanf("%d",&a);

    printf("Enter second numbers : ");
    scanf("%d",&b);

    if (a>b)
    {
        max = a;
    }
    else
    {
        max = b;
    }

    for (i=1;i<max;i++)
    {
        if (a%i==0 && b%i==0)
        {
        hcf = i;
        }
    }
    lcm = (a*b)/hcf;

    printf("The LCM of two numbers %d and %d is : %d",a,b,lcm);
    printf("\nThe HCF of two numbers %d and %d is : %d",a,b,hcf);

}
