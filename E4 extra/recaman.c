/*There are at least two sequences attributed to B. Recamán. One is the sequence a_n formed by taking a_1=1 and letting

a(n) = a(n-1) -n ; if an-1 -n>0 and new i.e is not already in the series.
a(n) = a(n-1) +n ; otherwise
a is a function.*/

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
