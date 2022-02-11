#include <stdio.h>

int tiles(int x,int y);
int main()
{
    int L,B;
    printf("Enter lenght : ");
    scanf("%d",&L);
    printf("Enter breadth : ");
    scanf("%d",&B);

    printf("%d",tiles(L,B));

}

int tiles(int x, int y)
{
    if (x==0||y==0)
        return 0;
    
    else if (x%2==0 && y%2==0)
        return tiles(x/2,y/2);
    
    else if (x%2==0 && y%2==1)
        return x+tiles(x/2,y/2);
    
    else if (x%2==1 && y%2==0)
        return y+tiles(x/2,y/2);
    
    else
        return x+y-1+tiles(x/2,y/2);
}