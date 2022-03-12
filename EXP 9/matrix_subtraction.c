/*Write a program to calculate the subtraction of matrices using pointers.
Dimensions of the matrix will be decided by the user.*/

#include <stdio.h>

int P(int M,int C,int *p);
int main()
{
    int R,C;

    printf("Enter the number of rows : ");
    scanf("%d",&R);
    printf("Enter the number of columns : ");
    scanf("%d",&C);

    int A[R][C],B[R][C],S[R][C];

    int M=R*C;
    int *a,*b,*s;

    a=&A[0][0];
    b=&B[0][0];
    s=&S[0][0];

    printf("For 1st matrix --> \n");
    for(int i=0;i<M;i++)
    {
        printf("Enter the element: ");
        scanf("%d",&(*(a+i)));
    }
    
    printf("For 2nd matrix --> \n");
    for(int i=0;i<M;i++)
    {
        printf("Enter the element: ");
        scanf("%d",&(*(b+i)));
    }

    P(M,C,&A[0][0]);
    printf("\n");
    P(M,C,&B[0][0]);

    for(int k=0;k<M;k++)
    {
        *(s+k) = (*(a+k) - *(b+k));
    }
    printf("\n");
    P(M,C,&S[0][0]);

    return 0;
}

int P(int M,int C,int *p)
{
    for(int i=0;i<M;i++)
    {
        if(i==C)
            printf("\n");
        printf("%d ",*(p+i));
    }
}