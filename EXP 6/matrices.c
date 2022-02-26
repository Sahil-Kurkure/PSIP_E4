#include <stdio.h>

int generator(int M[10][10],int Ro,int Co);
int multiplication(int A[10][10],int B[10][10],int R1,int C1,int R2,int C2);
int transpose(int M[10][10],int Ro, int Co);
int main()
{
    int A[10][10],B[10][10];
    int R1,C1,R2,C2;

    printf("For 1st matrix --> ");
    printf("\nEnter the number of rows of matrix : ");
    scanf("%d",&R1);
    printf("Enter the number of columns of matrix : ");
    scanf("%d",&C1);
    printf("----------------------------------------------\n");
    generator(A,R1,C1);

    printf("For 2nd matrix --> ");
    printf("\nEnter the number of rows of matrix : ");
    scanf("%d",&R2);
    printf("Enter the number of columns of matrix : ");
    scanf("%d",&C2);
    printf("----------------------------------------------\n");
    generator(B,R2,C2);

    multiplication(A,B,R1,C1,R2,C2);
    
    printf("The transpose of 1st matrix is : \n");
    transpose(A,R1,C1);
    printf("The transpose of 2nd matrix is : \n");
    transpose(B,R2,C2);

}

int generator(int M[10][10],int Ro, int Co)
{
    for(int i=0;i<Ro;i++)
    {
        for(int j=0;j<Co;j++)
        {
            int X;
            printf("Enter the element for the position %dx%d : ",i+1,j+1);
            scanf("%d",&X);
            M[i][j]=X;
        }
    }

    printf("Thus the matrix is : \n");
    for(int i=0;i<Ro;i++)
    {
        for(int j=0;j<Co;j++)
        {
            printf("%d ",M[i][j]);
        }
        printf("\n");
    }
}

int multiplication(int A[10][10],int B[10][10],int R1,int C1,int R2,int C2)
{
    int R[R1][C2],d;

    if(C1==R2)
    {
        printf("Matrix Multiplication --> \n");
        for (int i=0;i<R1;i++)
        {
            for(int j=0;j<C2;j++)
            {   
                d = 0;
                printf("The element present at position %dx%d will be [",i+1,j+1);
                for (int a=0;a<C1;a++)
                {
                    for (int b=0;b<R2;b++)
                    {
                        if (a==b)
                        {
                            d = d + (A[i][a]*B[b][j]); 
                        }
                    }
                }
                R[i][j]=d;
            }
        }
    }
        printf("\nThus the result of matrix multiplication is : \n");
        for(int i=0;i<R1;i++)
        {
            for(int j=0;j<C2;j++)
            {
                printf("%d ",R[i][j]);
            }
            printf("\n");
        }  
}

int transpose(int M[10][10],int Ro, int Co)
{
    int subarr[Co][Ro];

    for (int i=0;i<Ro;i++)
    {
        for (int j=0;j<Co;j++)
        {
            subarr[j][i] = M[i][j];
        }
    }

    for(int i=0;i<Co;i++)
    {
        for(int j=0;j<Ro;j++)
        {
            printf("%d ",subarr[i][j]);
        }
        printf("\n");
    }
}
