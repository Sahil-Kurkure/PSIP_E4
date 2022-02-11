// please enter value of A till 10 or 11 only.
#include <stdio.h>

int rec(int x);
int main()
{
    int A,i,B;
    printf("Enter a number : ");
    scanf("%d",&A);
    
    for (i=0;i<=A;i++)
    {
        B = rec(i);
        printf("A(%d) = %d \n",i,B);
        printf("-----------------\n");
    }
    
}

int rec(int x)
{   
    int a;
    if (x==0)
        return 0;
    
    if (x==1)
        return 1;

    for (a=0;a<=(x-1);a++)
    {
        if ((rec(x-1)-x)<0 || (rec(x-1)-x) == rec(a))
        {
            return (rec(x-1)+x);
        }
    }         
    if ((rec(x-1)-x)>0)
        return (rec(x-1)-x);
}
