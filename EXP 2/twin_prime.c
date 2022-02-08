#include <stdio.h>

int check(int x);
int main()
{
    int A,B,count,i;
    count = 0;

    printf("Enter the first number : ");
    scanf("%d",&A);

    printf("Enter the second number : ");
    scanf("%d",&B);

    for (i=A;i<B;i++)
    {
        if (check(i) && check(i+2))
        {
            printf("(%d,%d) , ",i,(i+2));
            count++;
        }
    }

    printf("\nThe total pairs are %d",count);

    return 0;
}

int check(int x)
{
    int a;

    if (x==1)
    {
        return 0;
    }

    for (a=2;a<x;a++)
    {
        if (x%a==0)
        {
            return 0;
        }
    }
    return 1;
}
