#include <stdio.h>

int main()
{   
    int R,C;

    printf("Enter the number of rows : ");
    scanf("%d",&R);

    printf("Enter the number of columns : ");
    scanf("%d",&C);

    int array[R][C];

    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            int X;
            printf("Enter the element for the index %dx%d : ",i,j);
            scanf("%d",&X);
            array[i][j]=X;
        }
    }

    for (int i=0;i<R;i++)
    {
        for(int a=0;a<C;a++)
        {
            for(int j=0;j<R;j++)
            {
                for (int b=0;b<C;b++)
                {   
                    if(array[i][a]<array[j][b])
                    {
                        int temp = array[i][a];
                        array[i][a]=array[j][b];
                        array[j][b]=temp;
                    }
                }
            }
        }
    }

    for(int i=0;i<R;i++)
    {
        for(int j=0;j<C;j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
}