/*Write a program which, given the shape of an island as the coordinates of a series of connected points on its coastline, 
determines whether an arbitrary point is in the sea or on land.
Assume that the island is a polygon.*/

#include <stdio.h>

int main()
{
    int X,Y;

    printf("Enter the x and y of sea (XxY) : ");
    scanf("%dx%d",&X,&Y);

    int sea[X][Y];

    for(int i=0;i<X;i++)
    {
        for(int j=0;j<Y;j++)
        {
            sea[i][j]=0;
        }
    }

    int y1,y2;

    for (int i=0;i<X;i++)
    {
        printf("Enter the y1(min) and y2(max) coordinate of the island for x=%d : ",X,Y,i);
        scanf("%d %d",&y1,&y2);

        for(int j=y1;j<=y2;j++)
        {
            sea[i][j]=1;
        }
        printf("\n");
    }

    printf("Thus the island looks like : \n");
    for(int i=0;i<X;i++)
    {
        for(int j=0;j<Y;j++)
        {
            printf("%d ",sea[i][j]);
        }
        printf("\n");
    }

   
    int a,b;
    char P;
    printf("Enter the coordinate you want to check : ");
    scanf("%d %d",&a,&b);

    if (sea[a][b]==0)
        printf("The point (%dx%d) lies is in the sea ",a,b);
    else
        printf("The point (%dx%d) lies on the island ",a,b);

    return 0;

}
