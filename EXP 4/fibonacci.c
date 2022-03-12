/* Write a recursive function which returns the nth term of the fibonacci series. Call it from main() to find the 1st n numbers of the fibonacci serie*/

#include <stdio.h>

int fib(int x);
void main()
{
    int A,B,i;

    printf("Enter a number : ");
    scanf("%d",&A);
    printf("The fibonacci series upto %d is : \n",A);

    for (i=0;i<=A;i++)
    {
        B = fib(i);
        printf("F(%d)=%d \n",i,B);
        printf("-----------\n");
    }

}

int fib(int x)
{
    if (x==0)
        return 0;
    
    if (x==1)
        return 1;
    
    else
        return fib(x-1)+fib(x-2);
}
