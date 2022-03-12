/* Given a room of area L x B. You have infinite number of tiles of size 2n x 2n , where n = 0, 1,2,... so on. 
The task is to find the minimum number of square tiles required to fill the given area with tiles.

Examples:
Input : L = 5, B = 6.
Output : 9

Area of 5 X 6 can be covered with minimum 9 tiles.
6 tiles of 1 X 1, 2 tiles of 2 X 2, 1 tile of 4 X 4.*/

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
