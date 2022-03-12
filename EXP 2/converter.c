/*Write a program to convert a decimal number to binary or convert a binary number to decimal*/

#include <stdio.h>

void main()
{
    int x,n,rem,dec,bin,i;
    i=1;
    dec=0;
    bin=0;

    printf("1.Binary to decimal\n");
    printf("2.Decimal to Binary\n");
    printf("Enter 1 or 2 : ");
    scanf("%d",&x);

    if (x==1)
    {

        printf("Enter a Binary number : ");
        scanf("%d",&n);
        while (n!=0)
        {
            rem = n%10;
            dec = dec + rem*i;
            n = n/10;
            i = i*2; 
        }
        printf("The Binary number in terms of decimal is : %d",dec);
    
    }

    if (x==2)
    {

        printf("Enter a decimal number : ");
        scanf("%d",&n);
        while (n!=0)
        {
            rem = n%2;
            bin = bin + rem*i;
            n = n/2;
            i = i*10; 
        }
        printf("The Binary number in terms of decimal is : %d",bin);    

    }
        

}
