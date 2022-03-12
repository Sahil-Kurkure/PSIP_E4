/*Given a number n, print following a pattern without using any loop.
Example:
Input: n = 16
Output: 16, 11, 6, 1, -4, 1, 6, 11, 16 */

#include <stdio.h>

void pattern(int x,int y,int z);
void main()
{
    int A,y;

    printf("Enter a number : ");
    scanf("%d",&A);
    y=A;
    pattern(A,y,0);
}

void pattern(int x,int y,int z)
{   
    printf("%d, ",x);
    if (z==1 && x==y)
        return;

    if (z==0)
    {
        if (x-5>0)
            pattern(x-5,y,0);
        else
            pattern(x-5,y,1);
    }
    else
        pattern(x+5,y,1);
}
